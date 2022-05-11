class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& nums, int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<nums.size();i++){
            while(i<nums.size()-1 && nums[i]==nums[i+1])i++;
            swap(nums[i],nums[index]);
            solve(ans,nums,index+1);
            swap(nums[i],nums[index]);
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(ans,nums,0);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;){
            if(ans[i]==ans[i+1])ans.erase(ans.begin()+i);
            else i++;
        }
        return ans;
    }
            
};