class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int num: nums)
        {
            if(us.find(num)!= us.end())
                return true;
            us.insert(num);
        }

        return false;

    }
};