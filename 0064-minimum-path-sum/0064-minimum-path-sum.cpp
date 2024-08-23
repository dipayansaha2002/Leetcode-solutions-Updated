class Solution {
public:
    int minPath(vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp)
    {
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 && j==0){
                    dp[i][j] = grid[i][j]; //if we are at the top left corner,
                   // then the minimum path value sum is at (0,0), 
                }else{
                    int up = grid[i][j];
                    if(i>0)
                        up += dp[i-1][j];
                    else
                        up += 1e9; //take large value to avoid out of bound
                    
                    int left = grid[i][j];
                    if(j>0)
                     left += dp[i][j-1];   
                    else
                        left += 1e9; //take large value to avoid out of bound
                    
                    dp[i][j] = min(up, left);  
                }
            }
        }
        return dp[m-1][n-1];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        return minPath(grid,m,n,dp);
    }
};