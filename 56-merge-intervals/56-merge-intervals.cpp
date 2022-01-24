class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int >> ans;
        intervals.push_back(vector<int> {INT_MAX,INT_MAX});
        sort(intervals.begin(),intervals.end());
        for(int i=0,j=1;i<intervals.size()-1,j<intervals.size();){
            if(i<intervals.size()-1 && intervals[i][1]>=intervals[j][0]) {
                
                if(intervals[i][0]>=intervals[j][0]){
                    intervals[i][0]=intervals[j][0];
                    // intervals[i][1]=intervals[j][1];
                }
                if(intervals[i][1]<=intervals[j][1]) intervals[i][1]=intervals[j][1];
            
                //ans.push_back(intervals[i]);         
                j++;
            
            }
            else {
                ans.push_back(intervals[i]);
                i=j;
                j++;
            }       
        }
        
        return ans;
    }
};