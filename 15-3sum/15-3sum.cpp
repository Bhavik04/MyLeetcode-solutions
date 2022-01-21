class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if (nums.size()<3) return ans;
       
        
        for(int i=0;i<nums.size()-2;i++){
          
            if ((i>0) && (nums[i]==nums[i-1]))
            continue;
            int j=i+1,k=nums.size()-1;
              //if(nums[i]==0 && nums[j]==0 && nums[k]==0) return ans;
            while(j<k){
                vector <int> temp;
                if(nums[i]+nums[j]+nums[k]==0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    temp.clear();
                    while(j<k && nums[j]==nums[j+1]) j++;
             while(j<k && nums[k]==nums[k-1]) k--;
                    j++;k--;
                    }
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                 else if(nums[i]+nums[j]+nums[k]<0) j++;
                
            }
        }
        return ans;
    }
};