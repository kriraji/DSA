class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int p=0;
        int k=n-1;
        int sum=0;
        for(int i=0;i<m;i++){
            if(p==k)
            sum+=mat[i][p];
            else
            sum+=mat[i][p]+mat[i][k];
            p++,k--;
        } 
        return sum;
    }
};