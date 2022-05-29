class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int num1,num2;
        vector<int> ans;
        
        
        //finds 2 possible majority elements
        for(auto &x:nums){
            if(num1==x)cnt1++;
            else if(num2==x)cnt2++;
            else if(cnt1==0){
                num1=x;cnt1=1;
            }
            else if(cnt2==0){
                num2=x;cnt2=1;
            }
           
            else{
                cnt1--;cnt2--;
            }
        }
        
        
        
        //to check frequency of those 2 elemets
        cnt1=cnt2=0;
        for(auto &x:nums){
            if(x==num1)cnt1++;
            else if(x==num2)cnt2++;
            
            
        }
        
        //checks if they satisfy the condition
        if(cnt1>nums.size()/3)ans.push_back(num1);
        if(cnt2>nums.size()/3)ans.push_back(num2);
            cout<<num1<<num2;
            
        return ans;
        
    }
};