class Solution {
public:
    bool isSafe(char num,int row,int col,vector<vector<char>>& board){
        for(int i=0;i<9;i++) if(board[row][i]==num)return false;
        
        for(int i=0;i<9;i++) if(board[i][col]==num) return false;
        
        for(int i=(row/3)*3;i<((row/3)*3)+3;i++){
            for(int j=(col/3)*3;j<((col/3)*3)+3;j++){
                if(board[i][j]==num)return false;
            }
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        
        
        for(int row=0;row<9;row++ ){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){

                    for(char t='1';t<='9';t++){
                        if(isSafe(t,row,col,board)){
                            board[row][col]=t;
                            if(solve(board)){return true;}
                            else board[row][col]='.';
                            //board[row][col]='.';
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