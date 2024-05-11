class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i+1 != row && grid[i][j] != grid[i + 1][j])
                {
                    return false;
                }
                if( j+1 != col && grid[i][j] == grid[i][j + 1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
