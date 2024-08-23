Gives Runtime error but the memo approach :
class Solution {
public:
int findSumNonSubsequent(vector<int>& nums, int ind, vector<int>& dp){
if(dp[ind] != -1) return dp[ind];
if(ind == 0) return nums[ind];
if(ind < 0) return 0;
long long int pick = nums[ind] + findSumNonSubsequent(nums, ind-2, dp);
long long int Notpick = 0 + findSumNonSubsequent(nums, ind-1, dp);
return dp[ind] = max(pick, Notpick);
}
int rob(vector<int>& nums) {
int n = nums.size();
vector<int> dp(n, -1);
return findSumNonSubsequent(nums, n-1,dp);
}
};