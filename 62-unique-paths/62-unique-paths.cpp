class Solution {
public:
    
    
    int uniquePaths(int m, int n) {
        int k=m+n-2;
        int j=m-1;
        
        double ans=1;
        for(int i=1;i<=j;i++){
            ans=ans*(k-j+i)/i;
        }
        
        return (int)ans;
    }
};