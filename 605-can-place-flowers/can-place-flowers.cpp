class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int sz = flowerbed.size();
        for(int i = 0; i < sz; i++){
            bool leftFree  = (i == 0)      || flowerbed[i-1] == 0;
            bool rightFree = (i == sz - 1) || flowerbed[i+1] == 0;
            if(flowerbed[i] == 0 && leftFree && rightFree){
                flowerbed[i] = 1;     // plant it
                count++;
                if(count >= n) return true;
            }
        }
        return count >= n;
    }
};