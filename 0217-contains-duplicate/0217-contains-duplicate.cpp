class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;

        for (int num : nums) {
            if (++frequency[num] > 1) {
                return true; 
            }
        }
       return false; 
    }
};