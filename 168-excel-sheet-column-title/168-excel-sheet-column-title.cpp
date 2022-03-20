class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0){
            int r=columnNumber%26;
            if(r==0) {ans.push_back('Z');} 
            else ans.push_back(r+64);
            
            
            if(columnNumber%26==0) {columnNumber/=26;columnNumber--;}
            else columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};