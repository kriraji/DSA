class Solution {
public:
 vector<int> res;
 void dfs(int u,int prev, unordered_map<int,vector<int>>&mpp){
      res.push_back(u);
      for(int &v:mpp[u]){
        if(v!=prev){
            dfs(v,u,mpp);
        }
      }
 }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> mpp;
        for(vector<int>&vec:adjacentPairs){
            int u=vec[0];
            int v=vec[1];
            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }
        int first=-1;
        for(auto &it:mpp){
            if(it.second.size()==1){
              first=it.first;
              break;
            }
        }
        dfs(first,INT_MIN,mpp);
        return res;
    }
};