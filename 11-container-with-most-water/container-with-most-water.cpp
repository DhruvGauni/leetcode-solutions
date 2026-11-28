class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = height.size();
        int i = 0,j = width-1;
        int maxVol = min(height[i],height[j])*(j-i);
        while(i<j){
            if(height[i]>height[j])j--;
            else i++;
            int temp = min(height[i],height[j])*(j-i);
            if(temp>maxVol){
                maxVol = temp;
            }
        }
        return maxVol;
    }
};