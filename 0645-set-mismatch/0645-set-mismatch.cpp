class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        set<int> s;
        for(int i=0;i<nums.size();++i){
            if(s.count(nums[i]))
                res.push_back(nums[i]);
            else
                s.insert(nums[i]);
        }
        int idx = 1;
        for(const auto& n: s){
            if(n!=idx){
                res.push_back(idx);
                return res;
            }
            idx++;
        }
        res.push_back(idx);
        return res;
    }
};