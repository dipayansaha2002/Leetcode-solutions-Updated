class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        vector<pair<int, char>> freq(26, {0, 'X'});

        // Count character frequencies
        for (char c : s) {
            freq[c - 'a'].first++;
            freq[c - 'a'].second = c;
        }

        // Sort characters by frequency in descending order
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());

        if (freq[0].first > (n + 1) / 2)
            return ""; // Impossible to reorganize
        
        string ans(n, 'X');
        int j = 0;

        // Fill even indices first
        for (int i = 0; i < n; i += 2) {
            while (j < 26 && freq[j].first == 0)
                j++;

            ans[i] = freq[j].second;
            freq[j].first--;
        }

        // Fill odd indices
        for (int i = 1; i < n; i += 2) {
            while (j < 26 && freq[j].first == 0)
                j++;

            ans[i] = freq[j].second;
            freq[j].first--;
        }

        return ans;
    }
};
