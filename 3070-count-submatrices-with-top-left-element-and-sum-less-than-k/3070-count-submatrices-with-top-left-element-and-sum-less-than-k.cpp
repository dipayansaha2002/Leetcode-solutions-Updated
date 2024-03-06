class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        
       vector<vector<int>>data(n, vector<int>(m,0));
        
        data[0][0] = grid[0][0];
        
        for(int i=1;i<m;i++)
        {
            data[0][i] = data[0][i-1] + grid[0][i];
        }
        for(int i=1;i<n;i++)
        {
            data[i][0] = data[i-1][0] + grid[i][0];
        }
        
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                data[i][j] = (data[i-1][j]+data[i][j-1]+grid[i][j])-data[i-1][j-1];
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(data[i][j] <=k)
                {
                    ans++;
                }
            }
        }
        return ans;
        }
};