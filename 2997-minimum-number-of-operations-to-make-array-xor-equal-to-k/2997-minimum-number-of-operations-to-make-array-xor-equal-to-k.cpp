class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    int n = nums.size();
    int mXOR = 0;
    for (int x : nums) {
        mXOR ^= x;
    }
    int ans = 0;
    int currentXOR = mXOR;

    for (int bit=30; bit>=0; bit--) {
        int mask = 1<<bit;
        int kBit = (k&mask)>>bit;
        int currXORBit = (currentXOR & mask) >> bit;

        if (currXORBit != kBit) {
            ans++;

            for (int& x : nums) {
                if ((x & mask)>>bit == currXORBit) {
                    x ^= mask;
                }
            }
            currentXOR ^= mask;  
        }
    }

    if (currentXOR == k) {
        return ans;
    }
    return -1; 
    }
};