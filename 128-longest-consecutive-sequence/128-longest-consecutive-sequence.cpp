class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        for(auto &x: nums)umap[x]++;
        
        
        
        if(nums.size()==0) return 0;
        
        //vector<int> dp(nums.size());
        
        int ans=1;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int count=0;
            if(!umap.count(num-1))
            while(umap.count(num)){
                count++;
                //dp[i]=count;
                ans=max(ans,count);
                num++;
            }
        }
        return ans;
    }
};