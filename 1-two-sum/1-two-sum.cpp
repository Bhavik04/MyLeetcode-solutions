class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(auto &x: nums)umap[x]++;
        
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]--;
            if(umap[nums[i]]==0) umap.erase(nums[i]);
            if(umap.count(target-nums[i])){
                ans.push_back(i);
                int num1=nums[i];
                for(i++;i<nums.size();i++){
                    if(nums[i]==target-num1){
                        ans.push_back(i);
                        return ans;
                    }
                    
                }
            }
        }
        
        return ans;
    }
};