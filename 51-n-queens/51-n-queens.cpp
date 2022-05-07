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
    
    void solve(vector<vector<string>>& ans, vector<string> &v,int col, int n ){
        if(col==n){ans.push_back(v);return;}
        
        for(int row=0;row<n;row++){
            if(safe(row,col,n,v)){
                v[row][col]='Q';
                solve(ans,v,col+1,n);
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
        //ans.push_back(v);
       // cout<<ans[1][1];
        solve(ans,v,0,n);
        return ans;
    }
};