class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) nums1=nums2;
        
        else
        for(int i=nums1.size()-1;i>=0 &&  n>0;i--){
           
            nums1[i]=max(nums1[m-1],nums2[n-1]);  
            max(nums1[m-1],nums2[n-1])==nums1[m-1]?m--:n--;
            if(m==0) break;
            
        }
        
        for(int i=0;i<n;i++) nums1[i]=nums2[i];
    }
};