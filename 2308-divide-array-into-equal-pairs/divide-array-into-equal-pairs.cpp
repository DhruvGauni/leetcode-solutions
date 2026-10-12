class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bool arr[501] = {false};
        int count = 0;
        for(auto& i : nums){
            if(arr[i]){
                count--;
                arr[i] = false;
            }
            else{
                count++;
                arr[i] = true;
            }
        }
        return count == 0;
    }
};