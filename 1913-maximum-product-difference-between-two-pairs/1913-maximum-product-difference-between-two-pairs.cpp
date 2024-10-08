class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest = 0, secondBiggest = 0, smallest = INT_MAX, secondSmallest = INT_MAX;
        
        for (int num : nums) {
            if (num > biggest) {
                secondBiggest = biggest;
                biggest = num;
            } else if (num > secondBiggest) {
                secondBiggest = num;
            }
            
            if (num < smallest) {
                secondSmallest = smallest;
                smallest = num;
            } else if (num < secondSmallest) {
                secondSmallest = num;
            }
        }
        
        return biggest * secondBiggest - smallest * secondSmallest;
    }
};
