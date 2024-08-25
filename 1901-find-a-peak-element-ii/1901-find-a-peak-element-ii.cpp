class Solution {
public:
    int findMaxIndex(vector<vector<int>>& mat, int n, int m, int col){
        if(col < 0 || col >= m) return -1; //to avoid heap overflow
        int maxIndexEle = -1;
        int index = -1;
        for(int i=0; i<n; i++){
            if(mat[i][col] > maxIndexEle){
                maxIndexEle = mat[i][col];
                index = i;
            }
        }
        return index;//index of max Ele in the mid Row
    }  
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()) return {-1, -1};
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m-1;
        while(low <= high){
            int mid = low + (high-low)/2 ;
            int maxRowIndex = findMaxIndex(mat, n, m, mid);
            int left = mid-1 >= 0 ? mat[maxRowIndex][mid-1]: -1;
            int right = mid+1 < m ? mat[maxRowIndex][mid+1] : -1;
            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right){
                return {maxRowIndex,mid};//peak 
            }
            else if(mat[maxRowIndex][mid] < left){
                high = mid-1;//decreasing sequence
            }
            else{
                low = mid+1;//increasing sequence
            }
        }
        return {-1,-1};//default o/p if condition don't work
    }
};