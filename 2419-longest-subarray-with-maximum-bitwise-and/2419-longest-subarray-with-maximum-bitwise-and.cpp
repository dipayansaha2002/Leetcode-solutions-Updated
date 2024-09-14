class Solution {
public:
    int longestSubarray(vector<int>& nums){
        int n = nums.size();
        int maxEle = *max_element(nums.begin(), nums.end());
        int len = 0, ans = 1;
        
        for(int i=0; i<n; i++){
            if (nums[i] == maxEle){
                len++;
                ans = max(ans, len);
            } else{
                len = 0;
            }
        }
        return ans;
    }
};