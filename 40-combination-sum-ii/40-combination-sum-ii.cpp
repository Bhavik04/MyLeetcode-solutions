class Solution {
public:
    void solve(int ind, vector<vector<int>>& ans, vector<int> na,vector<int>& candidates,int target){
        
        if(target==0){
            ans.push_back(na);
            return;
            }
        if( ind==candidates.size()){
            
            return;
        }
       
        
    for(int i=ind;i<candidates.size();i++){
        if(i>ind && candidates[i]==candidates[i-1])continue;
        if(target<candidates[ind])break;
        na.push_back(candidates[i]);
        solve(i+1,ans, na, candidates, target-candidates[i]);
        na.pop_back();
        }
        
        //solve(ind+1,ans, na, candidates, target);
        //return;
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> na;
        sort(candidates.begin(),candidates.end());
        
        solve(0,ans,na,candidates,target);
        
        
       
       
        
        return ans;
        
    }
};