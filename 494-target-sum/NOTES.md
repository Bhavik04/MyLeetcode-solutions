**to handle zeroes in aditya vermas sol**
use this after initialization
```
for(int i=1;i<=n;i++){
if(nums[i-1]==0){
dp[i][0]=dp[i-1][0]*2; // TO TAKE CARE OF SPECIAL CASES OF ZEROS
}
else{
dp[i][0]=1;
}
}
```
​
**found another code in linear dp**
handles all case efficiently
```
vector<int> dp(newS + 1, 0);  // newS is the sum
dp[0] = 1;
for (int i = 0; i < nums.size(); ++i) {
for (int j = newS; j >= nums[i]; --j) {
dp[j] += dp[j - nums[i]];
}
}
return dp[newS];
```
​