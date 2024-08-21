class Solution {
public:
    int climbStairs(int n) {
        //vector<int> dp(n+1, -1);
        int prev2 = 1;
        int prev = 1;
        for(int i=2; i<=n; i++)
        {
            //dp[i] = dp[i-1] + dp[i-2] ;
            int curr_i = prev2 + prev;
            prev2 = prev ;
            prev = curr_i ;
        }
        return prev;
    }
};