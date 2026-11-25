class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        while(i<n){
            int count = 0;
            int temp = nums[i];
            while(i<n && temp == nums[i]){
                count++;
                i++;
            }
            if(count > 2){
                int x = 2;
                while(x>0){
                    nums[j] = temp;
                    x--;
                    j++;
                }
            }
            else{
                while(count>0){
                    nums[j] = temp;
                    count--;
                    j++;
                }
            }
        }
        return j;
    }
};