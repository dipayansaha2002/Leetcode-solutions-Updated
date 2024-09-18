class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& image, int color, int initColor, vector<vector<int>>& ans, int delrow[], int delcol[]) {
        ans[row][col] = color; 
        int n = image.size();
        int m = image[0].size(); 
        //there are exactly 4 neighbors
        for(int i = 0; i < 4; i++) {
            int nrow = row + delrow[i]; 
            int ncol = col + delcol[i]; 
            //check for same initial color and unvisited pixel
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
               image[nrow][ncol] == initColor && ans[nrow][ncol] != color) {
                dfs(nrow, ncol, image, color, initColor, ans, delrow, delcol); 
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc]; //get initial color
        if (initColor == color) return image; //no need to process if the color is the same
        vector<vector<int>> ans = image;
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, -1, 0, +1};
        dfs(sr, sc, image, color, initColor, ans, delrow, delcol);
        return ans;
    }
};
