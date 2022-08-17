class Solution {
public:
    int countSubsetSum(vector<int> nums, long long sum){
        // Your code goes here
        int n=nums.size();
        int mod=1000000007 ;
        long long dp[n+1][sum+1];
        
        //sort(nums, nums+n, greater<int>());
        for(int i=0;i<=n;i++)
            for(int j=0;j<=sum;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
            
            
        for(int i=1;i<=n;i++){
            if(nums[i-1]==0){
                dp[i][0]=dp[i-1][0]*2; // TO TAKE CARE OF SPECIAL CASES OF ZEROS
                
            }
            else{
                dp[i][0]=1;    
            }
              
        }
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++){
                
                
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
                    dp[i][j]%=mod;
                }
                else {
                    dp[i][j] = dp[i-1][j];
                    dp[i][j]%=mod;
                }
                
            }
            return dp[n][sum]%mod;
	}
	  
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        sum=sum+target;
        if(sum%2!=0 || sum<0) return 0;
        sum/=2;
        sort(nums.begin(),nums.end(), greater<int>());
        
        
        return countSubsetSum(nums, sum);
        
        
    }
};