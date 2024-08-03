class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //create a temporary matrix to store the rotated result
        vector<vector<int>> rotated(n, vector<int>(n, 0));
        
        // Populate the rotated matrix with the rotated values
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }
        
        //copy the rotated matrix back to the original matrix
        matrix = rotated;
    }
};
