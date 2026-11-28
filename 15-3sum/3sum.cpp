class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(nums[i] > 0) break;
            while(i>0 && nums[i] == nums[i-1]) continue;
            int j = i + 1,k = n-1;
            int target = -nums[i];
            while(j<k){
                if(nums[j] + nums[k] > target){
                    k--;
                }
                else if( nums[j] + nums[k] < target){
                    j++;
                }
                else{
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }

        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};