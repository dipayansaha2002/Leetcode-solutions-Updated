class Solution {
private:
    set<vector<int>> unique;
    void backtrack(vector<int>& nums,int start,vector<vector<int>>&  res){
        if(start==nums.size()){
            if(unique.find(nums)==unique.end()){
                res.push_back(nums);
                unique.insert(nums);
            }
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            backtrack(nums,start+1,res);
            swap(nums[start],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums,0,res);
        return res;
    }
};