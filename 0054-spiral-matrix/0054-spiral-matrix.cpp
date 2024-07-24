class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, top = 0;
        int right = m-1, bottom = n-1; //AWARE!
        vector<int>ans;
        
        while(top <= bottom && left <= right){  
        for(int i=left; i<=right; i++){ //right to left
         ans.push_back(matrix[top][i]);
        }
        top++;
        
        for(int i=top; i<=bottom; i++){ //top to bottom
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        if(top <= bottom){  //then only we can print right to left for single row
        for(int i=right; i>=left;i--){ //right to left
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        
        if(left <= right){  //then only we can print bottom to top for single col
        for(int i=bottom; i>=top; i--){ //bottom to top
           ans.push_back(matrix[i][left]);
        }
        left++;
        } 
        }
        return ans;
    }
};