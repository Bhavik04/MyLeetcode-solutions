class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map <char ,int > p,s;
       for(auto x:s1) p[x]++; 
      
        for(int i=0,j=0;i<=s2.length();i++){
            s[s2[i]]++;
                if (p==s) return true;
            if(p.count(s2[i])==0) {s.erase(s.begin(),s.end()); j=i+1;}
            else if(s[s2[i]]>p[s2[i]]) {
                while(s2[j]!=s2[i]){
                     s[s2[j]]--;
                     j++;
                }
                s[s2[j]]--;
                j++;
            }
        }
         if (p==s) return true;
        cout << p['b']<<s['b'];
        return false;
    }
};