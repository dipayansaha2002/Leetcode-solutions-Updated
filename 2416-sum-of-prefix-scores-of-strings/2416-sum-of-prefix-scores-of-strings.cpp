struct PairHash {
    template <class T1, class T2>
    size_t operator ()(const pair<T1, T2>& p) const {
        auto h1 = hash<T1>{}(p.first);
        auto h2 = hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
};
class Solution {
public: 
    const int base[2] = {31, 37}, mod[2] = {(int) 1e9 + 7, (int) 1e9 + 9};
    unordered_map<pair<int,int>, int, PairHash> freq;

    void calcHash(string &s) {
        int h1 = 0, h2 = 0;
        for (auto &ch : s) {
            h1 = (1ll * h1 * base[0] + ch) % mod[0];
            h2 = (1ll * h2 * base[1] + ch) % mod[1];
            freq[{h1, h2}]++;
        }
    }

    vector<int> sumPrefixScores(vector<string>& words) {
        ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        int n = words.size();
        for(int i = 0; i < n; i++) calcHash(words[i]);
        
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int h1 = 0, h2 = 0, cnt = 0;
            for(int idx = 0; idx < words[i].size(); idx++) {
                h1 = (1ll * h1 * base[0] + words[i][idx]) % mod[0];
                h2 = (1ll * h2 * base[1] + words[i][idx]) % mod[1];
                cnt += freq[{h1, h2}];
            }
            ans[i] = cnt;
        }
        return ans;
    }
};
