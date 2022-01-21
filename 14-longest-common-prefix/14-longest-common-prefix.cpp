class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        string ans;
        string t1=strs[0],t2=strs[strs.size()-1];
        int i=0;
        while(t1[i]==t2[i] && i<t1.length() && i<t2.length()){
            ans.push_back(t1[i]);
            i++;
        }
        
        return ans;
    }
};