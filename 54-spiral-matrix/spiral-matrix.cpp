class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       int srow=0,erow=m-1;
       int scol=0, ecol=n-1;
       vector<int> ans;
       while(srow<=erow && scol<=ecol){
        for(int i=scol;i<=ecol;i++)
            ans.push_back(matrix[srow][i]);
        for(int i=srow+1;i<=erow;i++)
           ans.push_back(matrix[i][ecol]);
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow)
              break;
            ans.push_back(matrix[erow][i]);
        }
        for(int i=erow-1;i>=srow+1;i--){
               if(scol==ecol)
                  break;
              ans.push_back(matrix[i][scol]);
        }
             srow++,erow--,scol++,ecol--;
       } 
       return ans;
    }
};