class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            if(i>k) umap[nums[i-k-1]]--;
            if(umap[nums[i]]>0) return true;
            else umap[nums[i]]++;
        }
        return false;
    }
};