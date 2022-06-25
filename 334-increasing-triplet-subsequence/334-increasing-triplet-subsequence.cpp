class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        //shorter one
        int c1 = INT_MAX, c2 = INT_MAX;
    for (int x : nums) {
        if (x <= c1) {
            c1 = x;           // c1 is min seen so far (it's a candidate for 1st element)
        } else if (x <= c2) { // here when x > c1, i.e. x might be either c2 or c3
            c2 = x;           // x is better than the current c2, store it
        } else {              // here when we have/had c1 < c2 already and x > c2
            return true;      // the increasing subsequence of 3 elements exists
        }
    }
    return false;
        
        
        
        
        /* my solution
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
        */
    }
};