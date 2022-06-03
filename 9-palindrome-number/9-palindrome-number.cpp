class Solution {
public:
    bool isPalindrome(int x) {
        if (x>-1){
            vector <int> arr;
            int r,n;
            while(x){
                r=x%10;
                arr.push_back(r);
                x=x/10;

            }
            n=arr.size();
            for(int i=0;i<n/2;i++){
                if(arr[i]!=arr[n-i-1]){
                    return false;
                   
                }
            }
            return true;
        
        }
        else return false;
    }
};