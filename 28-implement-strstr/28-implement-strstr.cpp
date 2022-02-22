class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.length()>=needle.length()){
        if(needle.length() ==0) return 0;
            for(int i=0;i<=haystack.length()-needle.length();i++){
                int j=0,k=i;
                if(haystack[i]==needle[j]) {
                    while(haystack[k]==needle[j] && j<needle.length()){
                        k++;j++;
                    }
                if(j==needle.length()) return i;
                }
            }}
        return -1;
    }
};