class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int i = 0;
        while(i < nums.size()){ //TC:O(n)
            if (nums[i] != nums[nums[i]-1]) 
                swap(nums[i], nums[nums[i]-1]);
            else 
                i++;
        }
        for(i = 0; i < nums.size(); i++){ //TC:O(n)
            if (nums[i] != i + 1) 
                res.push_back(nums[i]);
        }
        return res;
    }
};
//TC:O(2n)==O(n)