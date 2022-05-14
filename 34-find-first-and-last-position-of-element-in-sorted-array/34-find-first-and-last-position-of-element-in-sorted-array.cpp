class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1;
        int mid=(f+l)/2;
        vector<int> ans={-1,-1};
        
        while(f<=l){
            mid=(f+l)/2;
            if(nums[mid]==target){ans[0]=ans[1]=mid;break;}
            else if(nums[mid]>target) l=mid-1;
            else f=mid+1;
                
        }
        f=mid;l=nums.size()-1;
        while(f<=l){
            mid=(f+l)/2;
            if(nums[mid]==target){ans[1]=mid;f=mid+1;}
            else if(nums[mid]>target) l=mid-1;
            else f=mid+1;
                
        }
        f=0;l=ans[0];
        while(f<=l){
            mid=(f+l)/2;
            if(nums[mid]==target){ans[0]=mid;l=mid-1;}
            else if(nums[mid]>target) l=mid-1;
            else f=mid+1;
                
        }
        
        return ans;
        
    }
};