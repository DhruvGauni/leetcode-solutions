class Solution {
public:
    int appendCharacters(string s, string t) {
        int r = 0;
        for(int l = 0; l < s.size() && r < t.size(); l++){
            if(s[l] == t[r]) r++;
        }
        return t.size() - r;
    }
};