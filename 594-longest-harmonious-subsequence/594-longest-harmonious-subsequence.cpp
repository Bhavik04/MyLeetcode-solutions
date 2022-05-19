class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        
        for(auto &x:umap){
            if(umap.count(x.first-1)){
                ans=max(ans,x.second+umap[x.first-1]);
            }
        }
        return ans;
    }
};