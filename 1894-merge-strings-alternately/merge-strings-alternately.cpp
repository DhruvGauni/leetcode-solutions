class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        ans.reserve(word1.size()+word2.size());
        for(int i = 0;i<word1.size() || i < word2.size();i++){
            if(i < word1.size()) ans += word1[i];
            if(i < word2.size()) ans += word2[i];
        }
        return ans;
    }
};