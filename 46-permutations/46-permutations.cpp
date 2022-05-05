class Solution {
public:
    
    void solve(vector<vector<int>>& ans, int index, vector<int>& nums){
        if(nums.size()==index){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<nums.size();i++){
            //int k=v.size();
            swap(nums[index],nums[i]);
           // v.push_back(nums[k]);
            solve(ans,index+1,nums);
            //v.pop_back();
            swap(nums[i],nums[index]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        //vector<int> v;
        //vector<int> freq(nums.size());
        solve(ans,0,nums);
        return ans;
    }
};