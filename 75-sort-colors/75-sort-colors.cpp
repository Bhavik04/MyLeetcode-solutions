class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int ,int> count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            while(count[0]--){nums[i]=0; i++;}
            while(count[1]--){nums[i]=1; i++;}
            while(count[2]--){nums[i]=2; i++;}
        }
    }
};