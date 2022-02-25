class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector <int > temp;
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=1;i<numRows;i++){
            temp.clear();
            temp.push_back(1);
            for(int j=1;j<i;j++){
                int t=ans[i-1][j-1]+ans[i-1][j];
                temp.push_back(t);
               
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        
        return ans;
    }
};