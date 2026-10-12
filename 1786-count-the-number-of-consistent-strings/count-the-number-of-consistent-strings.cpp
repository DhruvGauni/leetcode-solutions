class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool arr[26] = {false};
        for(auto& i : allowed){
            arr[i-'a'] = true;
        }
        int count = 0;
        for(int i = 0;i<words.size();i++){
            bool good = true;
            for(int j = 0;j<words[i].size();j++){
                if(!arr[words[i][j]-'a']){
                    good = false;
                    break;
                }
            }
            if(good){
                count++;
            }
        }
        return count;
    }
};