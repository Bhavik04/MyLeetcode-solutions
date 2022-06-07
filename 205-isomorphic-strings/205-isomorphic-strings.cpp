class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char> umap;
        for(int i=0;i<s.length();i++){
            if(umap.count(s[i])){
                if(umap[s[i]]!=t[i]) return false;
            }
            else {
                umap[s[i]]=t[i];
            }
        }
        umap.clear();
        for(int i=0;i<s.length();i++){
            if(umap.count(t[i])){
                if(umap[t[i]]!=s[i]) return false;
            }
            else {
                umap[t[i]]=s[i];
            }
        }
        
        return true;
    }
};