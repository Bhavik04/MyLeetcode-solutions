class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        for (int i=0,k=height.size()-1;i<k;){
            int capacity=min(height[i],height[k])*(k-i);
            ans=max(ans,capacity);
            (min(height[i],height[k])==height[i]) ? i++ : k--;
        }
        return ans;
    }
};