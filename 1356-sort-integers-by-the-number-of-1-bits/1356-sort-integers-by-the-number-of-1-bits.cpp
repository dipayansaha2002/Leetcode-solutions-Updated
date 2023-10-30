class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    unordered_map<int, vector<int>> v;

        for (auto i : arr) {
            //v[i].push_back(i);
            v[bitset<32>(i).count()].push_back(i);
        }

        vector<int> res;
        for (int k = 0; k <= 31; ++k) {
            if (v.find(k) != v.end()) {
                sort(v[k].begin(), v[k].end());
                res.insert(res.end(), v[k].begin(), v[k].end());
            }
        }

        return res;
    }
};

