class Solution {
public:
    
    void solve(vector<vector<int>>& ans, vector<int>& v, vector<int>& nums){
        if(nums.size()==v.size()){
            ans.push_back(v);
            return;
        }
        
        for(int i=v.size();i<nums.size();i++){
            int k=v.size();
            swap(nums[k],nums[i]);
            v.push_back(nums[k]);
            solve(ans,v,nums);
            v.pop_back();
            swap(nums[i],nums[k]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        //vector<int> freq(nums.size());
        solve(ans,v,nums);
        return ans;
    }
};