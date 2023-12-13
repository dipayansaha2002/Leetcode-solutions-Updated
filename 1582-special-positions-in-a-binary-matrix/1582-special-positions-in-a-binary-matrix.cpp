class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int ans = 0;
        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int, int> mp; // Map to store positions where element is 1

        // Find positions where element is 1 and store in the map
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1)
                    mp[i] = j;
            }
        }

        // Check each position in the map
        for (auto x : mp) {
            int i = x.first;
            int j = x.second;
            int temp = n - 1;
            int count = 0;

            // Check the entire row
            while (temp >= 0) {
                if (mat[i][temp] == 1)
                    count++;
                temp--;
            }

            temp = m - 1;
            // Check the entire column
            while (temp >= 0) {
                if (mat[temp][j] == 1)
                    count++;
                temp--;
            }

            if (count == 2)
                ans++; // If count is 2, the position is special
        }

        return ans;
}

};