class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int m = 0, n = a.size(), k = 0;
        vector <int> ret(n, 0);
        while (m < n && a[m] < 0) 
            m++;
        for (auto &x : a) 
            x *= x;
        int i = m - 1, j = m;
        while (i >= 0 && j < n) {
            if (a[i] < a[j]) ret[k++] = a[i--];
            else ret[k++] = a[j++];
        }
        while (i >= 0) 
            ret[k++] = a[i--];
        while (j <  n) 
            ret[k++] = a[j++];
        return ret;
    }
};
