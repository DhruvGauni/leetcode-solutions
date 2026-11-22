class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == ' ' || i == n-1){
                int r = i-1;
                if(i == n-1){
                    r = r+1;
                }
                while(l<r){
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
                if(i != n-1){
                    l = i+1;
                }
            }
        }
        return s;
    }
};