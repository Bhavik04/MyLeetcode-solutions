class Solution {
public:
    int reverse(int x) {
        int temp=0;
        while(x!=0){
            if(x>0){
                if(temp>(INT_MAX-x)/10) return 0;
        }
            else if (temp<(INT_MIN-x)/10) return 0;
            temp=temp*10+x%10;
            x=x/10;
        }
    return temp;
    }
};