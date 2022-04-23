class Solution {
public:
    
    void trueStory(vector<vector<int>>& ans,vector<int> notAns, vector<int> nums){
        if(nums.size()==0) {ans.push_back(notAns);return;}
        
        
        vector<int> op(notAns.begin(),notAns.end());
        
        notAns.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        
        trueStory(ans,op,nums);
        trueStory(ans,notAns,nums);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> notAns;
        trueStory(ans,notAns,nums);
        return ans;
    }
};