class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while (i < n) {
            int val = nums[i];
            int count = 0;
            while (i < n && nums[i] == val) {   // consume the whole group
                count++;
                i++;
            }
            count = min(2, count);              // keep at most 2
            while (count > 0) {
                nums[j] = val;
                j++;
                count--;
            }
        }
        return j;
    }
};