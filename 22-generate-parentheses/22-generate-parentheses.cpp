class Solution {
public:
    void solve(string s,int o,int c,vector<string>& v){
        if(c==0){v.push_back(s);return ;}
        
        
       if(o!=0){
           string s2=s;
           s2.push_back('(');   
            
            solve(s2,o-1,c,v);
           
       }
        if(c>o){
            s.push_back(')');
            solve(s,o,c-1,v);
        }
        //return ")";
    }
    
    
    vector<string> generateParenthesis(int n) {
        int o=n;
        int c=n;
        string s="";
        vector<string> v;
         solve(s,o,c,v);
        
        return v;
    }
};