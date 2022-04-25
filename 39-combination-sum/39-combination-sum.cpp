class Solution {
public:
    void solve(int ind, vector<vector<int>>& ans, vector<int> na,vector<int>& candidates,int target,int sum){
        
        if(sum==target){
            ans.push_back(na);
            return;
            }
        if( sum>target || ind==candidates.size()){
            
            return;
        }
        sum+=candidates[ind];
        na.push_back(candidates[ind]);
        
        solve(ind,ans, na, candidates, target,sum);
        
        sum-=candidates[ind];
        na.pop_back();
        
        solve(ind+1,ans, na, candidates, target,sum);
        return;
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> na;
        sort(candidates.begin(),candidates.end());
        
        solve(0,ans,na,candidates,target,0);
        
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1 && ans.size()>1;){
            if(ans[i]==ans[i+1])ans.erase(ans.begin()+i);
            else i++;
        }
       
        
        return ans;
        
    }
};