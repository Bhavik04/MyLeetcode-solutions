class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0,stock=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[i-1]) {
                sum+=prices[i-1]-stock;
                stock=prices[i];
            }
            else if(prices[i]>stock && i==prices.size()-1) {
                sum+=prices[i]-stock;
            }
        }
        return sum;
    }
};