class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int cnt=0;
        map<vector<int>,int> mpp;
        for(int i=0;i<n;i++){
            mpp[grid[i]]++;
        }
        for(int j=0;j<n;j++){
            vector<int> vec;
            for(int k=0;k<n;k++){
                vec.push_back(grid[k][j]);
            }
            cnt+=mpp[vec];
        }
return cnt;
    }
};