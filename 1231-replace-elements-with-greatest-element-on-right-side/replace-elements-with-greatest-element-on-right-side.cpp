class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        int max = INT_MIN;
        for(int i = n-1;i>=0;i--){
            if(max == INT_MIN){
                max = arr[i];
                ans[i] = -1;
                continue;
            }
            if(max<arr[i]){
                ans[i] = max;
                max = arr[i];
            }
            else{
                ans[i] = max;
            }
        }
        return ans;
    }
};