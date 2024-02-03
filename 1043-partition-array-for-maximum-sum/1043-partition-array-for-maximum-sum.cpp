class Solution {
public:
    
    int help(int i,vector<int>&arr,int k,vector<int>&dp)
    {
        int n = arr.size();
        if(i>=n) return 0 ; 

        if(dp[i]!=-1) return dp[i];
        
        int ans = 0 , curmax = 0 ; 

        for(int j=i;j<min(n,i+k);j++)
        {
            curmax = max(curmax,arr[j]);
            ans = max(ans,(j-i+1)*curmax+help(j+1,arr,k,dp));
        }

        return dp[i] = ans;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {

        int n = arr.size();
        vector<int>dp(n,-1);
        return help(0,arr,k,dp);
    }
};