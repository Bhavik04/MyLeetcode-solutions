class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0)return ans;
        long long c=nums[0];
        int k=c;
        for(int i=0;i<nums.size();i++){
            if(c==nums[i])c++;
            else {
                if(k==nums[i-1])ans.push_back(to_string(k));
                else ans.push_back(to_string(k)+"->"+to_string(nums[i-1]));
                //ans.push_back(s);
                //s=to_string(nums[i]);
                
                c=(long long)nums[i]+1;
                k=nums[i];
                
            }
        }
        if(k==nums[nums.size()-1])ans.push_back(to_string(k));
        else ans.push_back(to_string(k)+"->"+to_string(nums[nums.size()-1]));
        //ans.push_back(s);
        
        return ans;
    }
};