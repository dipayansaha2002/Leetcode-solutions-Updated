class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> degree(n, 0);
        vector<vector<bool>> isConnected(n, vector<bool>(n, false));
        
        for (auto& road : roads) {
            degree[road[0]]++;
            degree[road[1]]++;
            isConnected[road[0]][road[1]] = true;
            isConnected[road[1]][road[0]] = true;
        }

        int max_rank = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int rank = degree[i] + degree[j];
                if (isConnected[i][j]) {
                    rank--;
                }
                max_rank = max(max_rank, rank);
            }
        }

        return max_rank;
    }
};
