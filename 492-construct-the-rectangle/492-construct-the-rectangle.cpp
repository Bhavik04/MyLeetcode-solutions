class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=sqrt(area);
        vector<int>ans;
        if(n*n==area) {ans.push_back(n);ans.push_back(n);}
        else {
            long long l=n,w=1;
            while(l*n!=area){
                if(area%l==0){
                    w=area/l;
                    if(w>l)swap(l,w);
                    ans.push_back(l);
                    ans.push_back(w);
                    return ans;
                }
                l++;
            }
        }
        return ans;
    }
};