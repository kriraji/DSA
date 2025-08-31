class Solution {
public:
bool isvalid(vector<vector<char>>& board,int r, int c,char d){
    for(int i=0;i<9;i++){
        if(board[i][c]==d)
         return false;
         if(board[r][i]==d)
          return false;
    }
    int firsti=r/3 * 3;
    int firstj= c/3 *3;
    for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            if(board[firsti+k][firstj+l]==d)
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
            for(char d='1';d<='9';d++){
                if(isvalid(board,i,j,d)){
                    board[i][j]=d;
                    if(solve(board)==true)
                      return true;
                      board[i][j]='.';
                }
            }
            return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};