class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        
        
        for(auto &x:nums){
            umap[x]++;
        }
        
        for(int i=1;i<=nums.size()+1;i++){
            if(!umap.count(i))return i;
        }
        
       
        return -1;
    }
};