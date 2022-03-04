class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=1,end=nums.size();
        int mid=(start+end)/2;
        while(start<=end) {
            if(target==nums[mid-1]) return mid-1;
            else if(target>nums[mid-1]) start=mid+1;
            else end=mid-1;
            
            mid=(start+end)/2;
        }
        return -1;
    }
};