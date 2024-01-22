class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x,y;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;

        }
        for(int i=0;i<n;i++)
        {
           if(m[i+1]==0)
           x=i+1;
           if(m[i+1]==2)
           y=i+1;
            
        }
        return {y,x};
    }
};