class Solution {
public:
    int minCost(string colorSequence, vector<int>& timeRequired) {
        int n = colorSequence.size();
        vector<int> dp(n + 1, 0);
        char previousColor = 'A';
        int previousTime = 0;

        for (int i = 1; i <= n; i++) {
            if (colorSequence[i - 1] == previousColor) {
                //If the current color is the same as the previous one, update dp and previousTime
                dp[i] = dp[i - 1] + min(timeRequired[i - 1], previousTime);
                previousTime = max(timeRequired[i - 1], previousTime);
            } else {
                //If the current color is different, update dp, previousColor, and previousTime
                dp[i] = dp[i - 1];
                previousColor = colorSequence[i - 1];
                previousTime = timeRequired[i - 1];
            }
        }
        //Return the final result
        return dp[n];
    }
};