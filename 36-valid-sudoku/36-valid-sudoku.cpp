class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<int,int> > row(9);
        vector<map<int,int>> col(9);
        unordered_map<int , map<int ,int>> box;
        for (int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    int k=i/3+j/3*3;
                    int num=board[i][j]-'0'-1;

                    if(row[i][num] || col[num][j] || box[k][num]) return false;

                    row[i][num] = col[num][j] = box[k][num]=1;
                }
            }      
        }
        return true;
    }
};