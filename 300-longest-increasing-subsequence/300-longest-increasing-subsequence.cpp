class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
       
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
        }
        
        //Time Complexity is O(n^2)
        
        int ma=0;
        for(int i=0;i<dp.size();i++){
            ma=max(ma,dp[i]);
        }
        
        return ma;
    }
};