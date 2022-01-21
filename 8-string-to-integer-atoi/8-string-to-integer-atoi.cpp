class Solution {
public:
    int myAtoi(string s) {
        long long temp=0;
        int ans;
        stringstream ss;
        int flag=0;
        
        for (int i=0;i<s.length();i++){
            if(isalpha(s[i]) || s[i]=='.') return 0;
            
            if((s[i]=='-' || s[i]=='+') ){
                if(s[i]=='-') flag=1;
                int j=i+1;
                while(isdigit(s[j]) && j<s.length()){
                    ss<<s[j];
                    j++;
                }
                break;
                
            }
            if(isdigit(s[i])){
            while(isdigit(s[i])){
                    ss<<s[i];
                    i++;
                }
                break;
            }
        }
       
        ss>>temp;
        cout << temp;
        if(flag) temp=-temp;
        if(temp>INT_MAX) ans=INT_MAX;
        else if (temp<INT_MIN) ans =INT_MIN;
        else ans=temp;   
        
        
        return ans;
    }
};