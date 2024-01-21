class Solution {
public:
    int rob(std::vector<int>& nums) {
        int len = nums.size();

        if (len == 0) {
            return 0;
        } else if (len == 1) {
            return nums[0];
        } else if (len == 2) {
            return std::max(nums[0], nums[1]);
        }

        std::vector<int> dp(len);
        dp[0] = nums[0];
        dp[1] = std::max(nums[0], nums[1]);

        for (int i = 2; i < len; ++i) {
            dp[i] = std::max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[len - 1];
    }
};
