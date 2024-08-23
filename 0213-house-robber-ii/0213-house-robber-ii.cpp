class Solution {
public:
    long long int findSumNonSubsequent(vector<int>& nums, int n){
        //Edge cases when size = 0/1
       if(n == 0) return 0;
       if(n == 1) return nums[0];
        
        
      long long int prev = nums[0];
      long long int prev2 = 0;
        
       for(int i=1; i<n; i++){
           
           //int pick = nums[i];
        
              long long int pick = nums[i] + prev2 ;
              long long int notpick = 0 + prev;
               
              long long int curr_i = max(pick, notpick);
               prev2 = prev;
               prev = curr_i;
           
           
       }
        
        return prev;
    }
    
    
    long long int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        
        vector<int> v1(nums.begin() + 1, nums.end()); 
        vector<int> v2(nums.begin(), nums.end() - 1);
        
        long long int ans1 = findSumNonSubsequent(v1, v1.size());
        long long int ans2 = findSumNonSubsequent(v2, v2.size());
        
        return max(ans1, ans2);
    }
};