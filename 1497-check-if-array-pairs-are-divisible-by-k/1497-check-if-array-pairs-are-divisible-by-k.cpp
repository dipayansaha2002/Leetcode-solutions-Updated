class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> map;
        for (int e : arr) {
            int rem = e % k;
            int complementOne = -rem;
            int complementTwo = rem < 0 ? - k - rem : k - rem;

            if (map[complementOne]) {
                map[complementOne] -= 1;
            } else if (map[complementTwo]) {
                map[complementTwo] -= 1;
            } else {
                map[rem] += 1;
            }
        }

        for (auto e : map) {
            if (e.second) return false;
        }

        return true;
    }
};