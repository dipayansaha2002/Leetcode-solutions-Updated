class Solution {
public:
    int findSumNonSubsequent(vector<int>& nums, int n, vector<int>& dp){
        //Edge cases when size = 0/1
       if(n == 0) return 0;
       if(n == 1) return nums[0];
        
        
       dp[0] = nums[0];
       dp[1] = max(nums[0],nums[1]);
        
       for(int i=1; i<n; i++){
           
           int pick = nums[i];
           
           if(i>1) 
           {
               pick += dp[i-2];
               int notpick = 0 + dp[i-1];
               
               dp[i] = max(pick, notpick);
           }
           
       }
        
        return dp[n-1];
    }
    
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        return findSumNonSubsequent(nums, n ,dp);
    }
};