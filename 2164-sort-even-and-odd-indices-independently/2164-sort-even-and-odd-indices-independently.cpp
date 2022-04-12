class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even,odd;
        
        
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            i%2==0 ? even.push_back(nums[i]):odd.push_back(nums[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
        nums.clear();
        
        for(int i=0;i<n;i++){
            if(i%2==0){
            nums.push_back(even[i/2]);
            }
            else nums.push_back(odd[i/2]);
        }
        
        return nums;
    }
};