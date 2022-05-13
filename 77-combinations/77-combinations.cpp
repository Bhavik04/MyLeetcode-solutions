class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& nums, int k, int index, vector<int> v){
        if(v.size()==k) {
           // vector<int> v(nums.begin(),nums.begin()+k);
            ans.push_back(v); return;
        }
        
        if(index==nums.size())return;
        
        for(int i= index;i<nums.size();i++){
            
            v.push_back(nums[i]);
            solve(ans,nums,k,i+1,v);
            v.pop_back();
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=1;i<=n;i++){nums[i-1]=i;}
        vector<vector<int>> ans;
        vector<int> v;
        solve(ans,nums,k,0,v);
        return ans;
    }
};