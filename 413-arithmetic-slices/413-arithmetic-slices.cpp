class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int > diff;
        if(nums.size()<3) return 0;
        for(int i=1;i<nums.size();i++){
            diff.push_back(nums[i]-nums[i-1]);
        }
        int long long count=0;
        for(int i=0;i<diff.size()-1;i++){
            int temp=0;
            while(i<diff.size()-1 && diff[i]==diff[i+1]  ) {
                temp++;
                i++;
            }
            //temp--;
           // if(temp>=0)
                count+=temp*(temp+1)/2;
            
        }
        
        return count;
    }
};