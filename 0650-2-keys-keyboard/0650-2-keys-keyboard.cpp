class Solution {
public:
    int minSteps(int n) {
        if (n == 1) 
            return 0;

    vector<int> dp(n, 0);
    vector<int> copy(n, 0);
    dp[0] = 0;
    copy[0] = 0;

    for (size_t i = 1; i < n; i++) {
        int minimum = INT_MAX;
        int next_copy;
        
        for (size_t j = 0; j < i; j++) {
            if (copy[j] > 0 && ((i + 1) - (j + 1)) % copy[j] == 0 && 1 + dp[j] < minimum) {
                minimum = ((i + 1) - (j + 1)) / copy[j] + dp[j];
                next_copy = copy[j];
            }
            if (2 * (j + 1) == i + 1 && 2 + dp[j] < minimum) {
                minimum = 2 + dp[j];
                next_copy = j + 1;
            }
        }

        dp[i] = minimum;
        copy[i] = next_copy;
    }

    return dp.back();
    }
};