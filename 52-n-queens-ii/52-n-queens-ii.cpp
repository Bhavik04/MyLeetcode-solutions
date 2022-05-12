class Solution {
public:
    bool safe(int row, int col, int n, vector<string> v){
        int r=row,c=col;
        
        while(col>=0){
            if(v[row][col]=='Q')return false;
            col--;
        }
        
        row=r;col=c;
        while(col>=0 && row>=0){
            if(v[row][col]=='Q')return false;
            row--;
            col--;
        }
        
        row=r;col=c;
        while(col>=0 && row<n){
            if(v[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    
    
    void solve(vector<string>& board, int n,int col,int& ans){
        if(col==n) {ans++;return;}
        
        for(int row=0;row<n;row++){
            if(safe(row,col,n,board)){
                
                board[row][col]='Q';
                solve(board,n,col+1,ans);
                board[row][col]='.';
            }
        }
        
    }
    
    
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board(n);
        
       string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        solve(board,n,0,ans);
        //for(auto &x:board)cout<<x<<endl;
        return ans;
    }
};