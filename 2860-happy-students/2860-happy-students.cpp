class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans = 0, n = nums.size() ;
        if(nums[0] > 0) 
            ans++;
        
        for(int i = 0 ; i<nums.size()-1 ; i++){
           if( nums[i] <  i+1 && nums[i+1] > i+1)
               ans++;
        }
        
        if(nums.back() < n) 
            ans++;
        
        return ans;
    }
};