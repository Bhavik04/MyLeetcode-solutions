class Solution {
public:
    
    void trueStory(map<vector<int>,int>& ans,vector<int> notAns, vector<int> nums){
        if(nums.size()==0) {ans[notAns]++;return;}
        
        
        vector<int> op(notAns.begin(),notAns.end());
        
        notAns.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        
        trueStory(ans,op,nums);
        trueStory(ans,notAns,nums);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         map<vector<int>,int> ans;
        vector<int> notAns;
        sort(nums.begin(),nums.end());
        trueStory(ans,notAns,nums);
        vector<vector<int>> v;
        for(auto &x: ans){
            v.push_back(x.first);
        }
        return v;
    }
};