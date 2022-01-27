class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<vector<int>> :: iterator it1;
        vector<int> :: iterator it2;
        int sum=0,temp=0;
        for(int i=0;i<accounts.size();i++){
            temp=0;
            for(int j=0;j<accounts[i].size();j++)
                temp+=accounts[i][j];
           sum = max(sum,temp);
        }
        return sum;
    }
};