class Solution {
public:
    int findSumNonSubsequent(vector<int>& nums, int n){
        //Edge cases when size = 0/1
       if(n == 0) return 0;
       if(n == 1) return nums[0];
        
        
       int prev = nums[0];
       int prev2 = 0;
        
       for(int i=1; i<n; i++){
           
           //int pick = nums[i];
        
               int pick = nums[i] + prev2 ;
               int notpick = 0 + prev;
               
               int curr_i = max(pick, notpick);
               prev2 = prev;
               prev = curr_i;
           
           
       }
        
        return prev;
    }
    
    
    int rob(vector<int>& nums) {
        int n = nums.size();
       // vector<int> dp(n, 0);
        return findSumNonSubsequent(nums, n);
    }
};