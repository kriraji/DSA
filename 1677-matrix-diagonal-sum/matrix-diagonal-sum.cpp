class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            if(i==n-1-i)
            sum+=mat[i][i];
            else
            sum+=mat[i][i]+mat[i][n-1-i];
        } 
        return sum;
    }
};