class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> umap;
        unordered_map<string,char> umap2;
        
        vector<string> v;
        string k="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' ){v.push_back(k);k="";}
            else if(i==s.length()-1){k.push_back(s[i]); v.push_back(k);}
            else k.push_back(s[i]);            
        }
        
        if(pattern.length()!=v.size()) return false;
        //cout<<pattern.length()<<" "<<v.size();
        //for(int i=0;i<pattern.length();i++){cout<<pattern[i]<<v[i];}
        
        //cout<<v[0];
        for(int i=0;i<pattern.length();i++){
            if(umap.count(pattern[i]) ){
                //cout<<umap[pattern[i]]<<v[i];
                if(umap[pattern[i]]!=v[i])return false;
            }
            else umap[pattern[i]]=v[i];
            
            
            if(umap2.count(v[i]) ){
                //cout<<umap[pattern[i]]<<v[i];
                if(umap2[v[i]]!=pattern[i])return false;
            }
            else umap2[v[i]]=pattern[i];
            
        }
        
        
        return true;
    }
};