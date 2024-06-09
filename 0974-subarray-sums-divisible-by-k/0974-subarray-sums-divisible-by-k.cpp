class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size() ;
        vector<int> sums(k,0) ;
        sums[0]++ ;
        int count = 0;
        int curSum = 0 ;
        for( int i=0;i<n;i++ ){
            curSum = ( curSum + nums[i]%k + k) % k ;
            count += sums[curSum];
            sums[curSum]++ ;
        }
        return count ;
    }
};