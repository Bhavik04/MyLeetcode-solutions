class Solution {
public:
    bool poweroftwo(int n){
        if(n==0) return false;
        return(ceil(log2(n))==floor(log2(n)));
    }
    
    vector<int> countBits(int n) {
        vector <int >ans;
        
         ans.push_back(0);
        
        
        if(n>=1) ans.push_back(1);
        
        int count;
        for(int i=2;i<=n;i++){
            if(poweroftwo(i)) ans.push_back(1);
            else{
                ans.push_back(1+ans[i-pow(2,floor(log2(i)))]);
            }
            
            //cout<< floor(log2(i))<<" ";
            
            
        }
        return ans;
    }
};