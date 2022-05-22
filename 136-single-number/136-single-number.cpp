class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto &x:nums){
            if(umap.count(x))umap.erase(x);
            else umap[x]++;
        }
        for(auto &x:umap) return x.first;
        
        return 0;
    }
};