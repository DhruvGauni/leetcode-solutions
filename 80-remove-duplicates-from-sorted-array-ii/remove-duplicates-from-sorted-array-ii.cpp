class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j=0;
        int n = nums.size();
        while(i<n){
            nums[j] = nums[i];
            i++;
            j++;
            if(i<n && nums[i] == nums[i-1]){
                nums[j] = nums[i];
                i++;
                while(i<n && nums[i] == nums[j]){
                    i++;
                }
                j++;
            }
           
        }
        return j;
    }
};