class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mx = 0, smx = 0;                 // nums[i] >= 1, so 0 is a safe floor
        int mn = INT_MAX, smn = INT_MAX;

        for (int x : nums) {
            // top two largest
            if (x > mx) { smx = mx; mx = x; }
            else if (x > smx) smx = x;

            // bottom two smallest
            if (x < mn) { smn = mn; mn = x; }
            else if (x < smn) smn = x;
        }
        return mx * smx - mn * smn;
    }
};