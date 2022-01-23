class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
       int c=0;
        for (int i=0;i<nums.size();i++)
            if(nums[i]==val) c++;
        
        c=nums.size()-c;
        
        for(int i=0,j=0;i<nums.size(), j<c;i++){
            if (nums[i]==val) continue;
            else {nums[j]=nums[i]; j++;}
        }
        return c;
    }
};