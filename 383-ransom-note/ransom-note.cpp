class Solution {
public:
    bool canConstruct(string ransomNote, string magazine){
        unordered_map<char,int> mpp;
        for(int i = 0;i<magazine.size();i++){
            mpp[magazine[i]]++;
        }
        for(int i = 0;i<ransomNote.size();i++){
            mpp[ransomNote[i]]--;
        }
        for(auto& i : mpp){
            if(i.second < 0){
                return false;
            }
        }
        return true;
    }
};