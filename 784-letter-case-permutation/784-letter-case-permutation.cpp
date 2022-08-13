class Solution {
public:
    
    void solve(vector<string>& res, string ans, string s){
        if(ans.size()==s.size()){
            cout<<"hh";
            res.push_back(ans);
            return;
        }
        
        int i=ans.size();
        
        if(isdigit(s[i])){
            ans.push_back(s[i]);
            solve(res, ans, s);
            
        }
        
        else{
            
            ans.push_back(tolower(s[i]));
            solve(res, ans, s);
            
            ans.pop_back();
            
            ans.push_back(toupper(s[i]));
            solve(res, ans, s);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string ans;
        solve(res, ans, s);
        
        return res;
    }
};