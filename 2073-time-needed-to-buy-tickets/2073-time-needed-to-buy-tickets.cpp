class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
    int res = 0, cap = t[k];
    for (int i = 0; i < t.size(); ++i)
        res += min(cap - (i > k), t[i]);
    return res;
}
};