class Solution
{
public:
    int subsetXORSum(vector<int>& nums)
    {
        int N = nums.size();
        int numOfSubsets = pow(2, N);
        int result = 0;
        
        for (int subset = 1; subset < numOfSubsets; ++subset)
        {
            int runningXor = 0;
            for (int i = 0, bits = subset; i < nums.size(); ++i, bits >>= 1)
                if (bits & 1)   
                    runningXor ^= nums[i];
            
            result += runningXor;
        }
        
        return result;
    }
};