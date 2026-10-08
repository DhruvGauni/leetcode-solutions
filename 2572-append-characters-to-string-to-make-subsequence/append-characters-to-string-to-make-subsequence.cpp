class Solution {
public:
    int appendCharacters(string s, string t) {
        int l = 0,r = 0;
        while(l<s.size() && r<t.size()){
            if(t[r] == s[l]){
                l++;
                r++;
            }
            else{
                l++;
            }
        }
        int count = 0;
        while(r<t.size()){
            count++;
            r++;
        }
        return count;
    }
};