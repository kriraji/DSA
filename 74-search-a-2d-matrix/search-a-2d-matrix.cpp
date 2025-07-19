class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            int j=0;
            int k=matrix[i].size()-1;
            if(target>=matrix[i][j]&& target<=matrix[i][k]){
                while(j<=k){
                    int mid=(j+k)/2;
                    if(matrix[i][mid]==target)
                     return true;
                     else if(target>matrix[i][mid])
                      j=mid+1;
                      else
                      k=mid-1;
                }
            }
        }
        return false;
    }
};