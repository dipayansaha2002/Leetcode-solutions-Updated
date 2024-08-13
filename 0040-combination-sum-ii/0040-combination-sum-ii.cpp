class Solution {

public:

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) 

    {

        sort(nums.begin(),nums.end());

        vector<vector<int>>ans={};

        vector<int> v;

        combination(0,nums,v,ans,target);

        return ans;

    }

    void combination(int start,vector<int>& nums,vector<int>& v,vector<vector<int>>&ans,int target)

    {

        if(target==0)

        {

            ans.push_back(v);

            return;

        }

        if(target<0)

        return;

        for(int i=start;i<nums.size();i++)

        {

            if(i>start&&nums[i]==nums[i-1])continue;

            v.push_back(nums[i]);

            combination(i+1,nums,v,ans,target-nums[i]);

            v.pop_back();

        }

    }

};