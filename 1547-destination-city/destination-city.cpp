class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mpp;
        for(int i = 0;i<paths.size();i++){
            if(!mpp.count(paths[i][0])) mpp[paths[i][0]]++;
            else mpp[paths[i][0]]--;

            if(!mpp.count(paths[i][1])) mpp[paths[i][1]]--;
            else mpp[paths[i][1]]++;
        }
        for(auto& i : mpp){
            if(i.second == -1){
                return i.first;
            }
        }
        return "";
    }
};