class Solution {
public:
void mark(int r,int c, vector<vector<int>>&grid){
    for(int i=r-1;i>=0;i--){
        if(grid[i][c]==2||grid[i][c]==3)
          break;
          grid[i][c]=1;
    }
    for(int i=r+1;i<grid.size();i++){
        if(grid[i][c]==2||grid[i][c]==3)
         break;
         grid[i][c]=1;
    }
    for(int i=c+1;i<grid[0].size();i++){
        if(grid[r][i]==2 || grid[r][i]==3)
          break;
          grid[r][i]=1;
    }
    for(int i=c-1;i>=0;i--){
        if(grid[r][i]==2||grid[r][i]==3)
          break;
          grid[r][i]=1;
    }
}
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m,vector<int>(n,0));
        for(auto &vec:guards){
            int i=vec[0];
            int j=vec[1];
            grid[i][j]=2;
        }
        for(auto &vec: walls){
            int i=vec[0];
            int j=vec[1];
            grid[i][j]=3;
        }
        for(auto &g:guards){
            int i=g[0];
            int j=g[1];
            mark(i,j,grid);
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)
                 cnt++;
            }
        }
        return cnt;
    }
};