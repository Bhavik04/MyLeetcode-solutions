class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1=nums[0],num2=nums[0],num3=INT_MAX;
        
        int count=0;
        for(int i=1;i<nums.size();i++){
            //cout<<nums[i];
           if(count){
               
                if(nums[i]>num2)return true;
               
               else if(nums[i]<=num2 && nums[i]>num1)num2=nums[i];
               
               else if(nums[i]<=num1 ){
                   //cout<<num;
                   if(num3==INT_MAX)num3=nums[i];
                    else if(nums[i]>num3){
                        num1=num3;
                        num2=nums[i];
                        num3=INT_MAX;
                    }
                   
               }
           }
            else{
                if(nums[i]>num2){
                    num2=nums[i];
                    count++;
                }
                else {
                    num1=num2=nums[i];
                }
            }
        }
        //cout<<num1<<num2;
        return false;
    }
};