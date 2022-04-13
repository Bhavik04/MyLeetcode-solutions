class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        vector<int>ans;
        int temp=-1;
        for(int  i=0,j=0;i<nums1.size() && j<nums2.size();){
            if(nums1[i]>nums2[j]) j++;
            else if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]==nums2[j] && nums1[i]!=temp) {ans.push_back(nums1[i]);temp=nums1[i];i++;j++;}
            else {i++;j++;}
        }
        return ans;
    }
};