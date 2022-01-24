class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
       
        while(l>=0 && digits[l]==9 ){
            
            digits[l]=0;
            l--;       
        }
        if(l==-1) {digits[0]=1; digits.push_back(0);}
        if(l>=0 && digits[l]<9){
                digits[l]+=1;
                
            }
        return digits;
    }
};