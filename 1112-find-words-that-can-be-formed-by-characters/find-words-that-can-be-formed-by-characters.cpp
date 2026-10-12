class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26] = {0};
        for(auto& i : chars){
            arr[i-'a']++;
        }
        int total = 0;
        for(auto& i : words){
            int temp[26];
            copy(arr,arr+26,temp);
            bool good = true;
            for(char j : i){
                if(--temp[j-'a']<0){
                    good = false;
                    break;
                }
            }
            if(good) total = total + i.size();
        }
        return total;
    }
};