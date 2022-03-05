class Solution {
public:
  
    
    vector<int> countBits(int n) {
        vector <int >ans;
        
         ans.push_back(0);
        
        
        if(n>=1) ans.push_back(1);
        int power;
        int count;
        for(int i=2;i<=n;i++){
            if(  ceil(log2(i))==floor(log2(i))) {ans.push_back(1);power=i;}
            else{
                ans.push_back(1+ans[i-power]);
            }
            
            //cout<< floor(log2(i))<<" ";
            
            
        }
        return ans;
    }
};