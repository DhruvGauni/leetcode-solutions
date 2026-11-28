class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = height.size();
        int i = 0,j = width-1;
        int maxVol = 0;
        while(i<j){
            maxVol = max(maxVol,min(height[i],height[j])*(j-i));
            if(height[i]>height[j])j--;
            else i++;
        }
        return maxVol;
    }
};