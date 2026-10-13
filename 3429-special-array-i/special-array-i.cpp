class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int check = 0;
        if(nums[0]%2 == 0) check = 0;
        else check = 1;
        for(auto& i : nums){
            if(i%2 == 0)check++;
            else check--;


            if(check < 0 || check > 1)return false;
        }
        return true;
    }
};