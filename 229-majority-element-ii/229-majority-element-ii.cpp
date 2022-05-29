class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto &x:nums){
            umap[x]++;
        }
        vector<int> ans;
        for(auto &x: umap){
            if(x.second>nums.size()/3) ans.push_back(x.first);
        }
        return ans;
    }
};