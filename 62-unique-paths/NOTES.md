​
**recursive brute force sol**
```
int solve(int i,int j,int m, int n){
if(i==m-1 && j==n-1)return 1;
if(i>=m || j>=n) return 0;
return solve(i+1,j,m,n)+solve(i,j+1,m,n);
}
int uniquePaths(int m, int n) {
int ans=solve(0,0,m,n);
return ans;
}
```
​
**solution better using dp**
​
```
int solve(int i,int j,int m, int n,vector<vector<int>>& dp){
if(i==m-1 && j==n-1)return 1;
if(i>=m || j>=n) return 0;
if(dp[i][j]!=-1)return dp[i][j];
else return dp[i][j]=solve(i+1,j,m,n,dp)+solve(i,j+1,m,n,dp);
}
int uniquePaths(int m, int n) {
vector<vector<int>> dp(m,vector<int> (n,-1));
int ans=solve(0,0,m,n,dp);
return ans;
}
```
​
**optimal solution**
```
​
```
​