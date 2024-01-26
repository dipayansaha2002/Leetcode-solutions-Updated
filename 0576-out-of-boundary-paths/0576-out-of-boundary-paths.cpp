class Solution {
    int dirx[4] = {1,0,-1,0};
    int diry[4] = {0,1,0,-1};
    int mod = 1e9+7;
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1, vector<int> (maxMove+1,-1)));
        return movesToGetOutOfBoundary(m,n,maxMove,startRow,startColumn,dp);
    }

    bool outOfBoundary(int m, int n,int x,int y)
    {
        if(x<0 || y< 0 || x>=m || y>=n)
        {
            return true;
        }
        return false;
    }

    int movesToGetOutOfBoundary(int m, int n, int maxMove, int x, int y,vector<vector<vector<int>>> &dp)
    {
        if(outOfBoundary(m,n,x,y))
        {
            return 1;
        }
        if(maxMove == 0)
        {
            return 0;
        }
        if(dp[x][y][maxMove] !=-1)
        {
            return dp[x][y][maxMove];
        }
        int moves=0;
        for(int i=0;i< 4;i++)
        {
            int new_x = x + dirx[i];
            int new_y = y + diry[i];
            moves = (moves%mod + movesToGetOutOfBoundary(m,n,maxMove - 1,new_x,new_y,dp))%mod;
            
        }
        
        return dp[x][y][maxMove] = moves%mod;
    }
};