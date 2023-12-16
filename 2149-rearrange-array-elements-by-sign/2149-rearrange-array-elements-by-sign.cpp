#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int posIdx = 0, negIdx = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Place positive numbers at even indices
                while (posIdx < n && nums[posIdx] <= 0) {
                    posIdx++;
                }
                ans[i] = nums[posIdx++];
            } else {
                // Place negative numbers at odd indices
                while (negIdx < n && nums[negIdx] >= 0) {
                    negIdx++;
                }
                ans[i] = nums[negIdx++];
            }
        }

        return ans;
    }
};
