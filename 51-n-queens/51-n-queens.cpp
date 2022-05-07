class Solution {
public:
    
   /* bool safe(int row, int col, int n, vector<string> v){
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
    } */
    
    void solve(vector<vector<string>>& ans, vector<string> &v,int col, int n , vector<int>& lrow, vector<int>& udiagonal, vector<int>& ldiagonal ){
        if(col==n){ans.push_back(v);return;}
        
        for(int row=0;row<n;row++){
            if(lrow[row]==0 && ldiagonal[row+col]==0 && udiagonal[(n-1)+(row-col)]==0){
                v[row][col]='Q';
                lrow[row]=1;
                ldiagonal[row+col]=1;
                udiagonal[(n-1)+(row-col)]=1;
                solve(ans,v,col+1,n,lrow,udiagonal,ldiagonal);
                 lrow[row]=0;
                ldiagonal[row+col]=0;
                udiagonal[(n-1)+(row-col)]=0;
                v[row][col]='.';
                
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        vector<int> lrow(n),udiagonal(2*n-1),ldiagonal(2*n-1);
        
        //ans.push_back(v);
       // cout<<ans[1][1];
        solve(ans,v,0,n,lrow,udiagonal,ldiagonal);
        return ans;
    }
};