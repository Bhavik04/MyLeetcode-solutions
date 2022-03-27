class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ayo;
        int count=0;
        if(ruleKey=="type") ayo=0;
        else if(ruleKey=="color") ayo=1;
        else if(ruleKey=="name") ayo=2;
        
        for(int i=0;i<items.size();i++){
            if(items[i][ayo]==ruleValue) count++;
        }
        return count;
        
    }
};