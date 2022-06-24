class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        vector<int> ans;
        
        sort(nums.begin(),nums.end(),greater<int>());
        long long sum=0;
        
        for(auto &x: nums)sum+=x;
        
        int sum1=0;
        for(auto &x:nums){
            sum1+=x;
            ans.push_back(x);
            if(sum1>(sum-sum1))break;
        }
        return ans;
    }
};