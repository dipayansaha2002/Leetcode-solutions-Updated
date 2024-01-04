class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int ans = -1; // Initialize with -1 in case there is no lucky integer
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        for (const auto& pair : mp) {
            if (pair.first == pair.second) {
                ans = std::max(ans, pair.first);
            }
        }
   return ans;
    }
};
