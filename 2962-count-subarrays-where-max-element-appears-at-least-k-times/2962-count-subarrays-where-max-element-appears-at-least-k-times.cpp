class Solution {
public:
    long countSubarrays(vector<int>& nums, int k) {
        int max = INT_MIN;
        long output = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        int count = 0, a = 0, b = 0;
        while (b < nums.size()) {
            if (nums[b] == max) {
                count++;
            }
            if (count >= k) {
                while (count >= k) {
                    output += nums.size() - b;
                    if (nums[a] == max) {
                        count--;
                    }
                    a++;
                }
            }
            b++;
        }
        return output;
    }
};
