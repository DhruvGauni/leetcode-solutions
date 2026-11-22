class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        while(l<r){
            if(nums[l]%2 != 0 && nums[r]%2 == 0){
                swap(nums[l],nums[r]);
                r--;
                l++;
            }
            else if(nums[l]%2 != 0 && nums[r]%2 != 0){
                r--;
            }
            else{
                l++;
            }
        }
        return nums;
    }
};