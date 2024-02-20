class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for( int j : nums ){
          n = n ^ j;
          n = n ^ i;
          i++;
        }
        return n;
    }
};