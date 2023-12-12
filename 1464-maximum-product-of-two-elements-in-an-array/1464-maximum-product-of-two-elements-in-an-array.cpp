class Solution {
public:
    int maxProduct(vector<int>& nums) {
     
        int n = nums.size() ;
        sort(nums.begin(),nums.end()) ; // Sorted into ascending order
        return (nums[n-2]-1)*(nums[n-1]-1) ; // return the last 2 numbers product...
        
    }
};