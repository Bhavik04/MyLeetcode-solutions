class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
        //method 1 using XOR
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans=ans^i^nums[i];    //uses fact that a^b^b=a   element that only comes ones, stays.
        }
        return ans^n;
        
        
        /*
        
        //method 2 putting element at its place
            for(int i=0;i<nums.size();i++){
               while(nums[i]!=nums.size() &&  nums[i]!=i)
                   swap(nums[i],nums[nums[i]]);
           }

            for(int i=0;i<nums.size();i++){
                if(i!=nums[i])return i;
            }
            return nums.size();
        */
    }
};