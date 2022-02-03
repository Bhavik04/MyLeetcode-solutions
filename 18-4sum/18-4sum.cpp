class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector< vector<int >> ans;
        if(nums.size()<4) return ans;
        sort(nums.begin(),nums.end());
        
        
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if (j>i+1 && nums[j]==nums[j-1]) continue;
                int tar =target-(nums[i]+nums[j]);
                for (int s=j+1,k=nums.size()-1;s<k;){
                    if(s>j+1 && nums[s]==nums[s-1]) {s++;continue;}
                    
                    if( k<nums.size()-2 && nums[k]==nums[k+1]) {k--;continue;}
                    
                    int sum= nums[s] + nums[k];
                    
                    if(sum==tar) {
                        ans.push_back({nums[i],nums[j],nums[s],nums[k]});
                        s++;
                        k--;
                        
                    }
                    else if(sum>tar) k--;
                    else s++;
                }
            }
        }
        return ans;
    }
};