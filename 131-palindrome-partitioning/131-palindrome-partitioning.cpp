class Solution {
public:
    bool pallin(int i,int j, string s){
        while(i<=j){
            if(s[i++]!=s[j--]) return false;
            //i++;j--:
        }
        return true;
    }
    
    void solve(vector<vector<string>>& ans, int ind, string s, vector<string>& path){
        if(ind==s.length()) {ans.push_back(path); return ;}
        
        for(int i=ind;i<s.length();i++){
            if(pallin(ind,i,s)){
                path.push_back(s.substr(ind,i-ind+1));
                solve(ans,i+1,s,path);
                path.pop_back();
            }
        }
        
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        
        solve(ans,0,s,path);
        
        return ans;
    }
};