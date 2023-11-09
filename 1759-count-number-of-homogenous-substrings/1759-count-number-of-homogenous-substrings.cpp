class Solution {
public:
    int countHomogenous(string s) {
        long long res = 0;
        int start = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[start]) {
                int cum = i - start;
                while (cum > 0) {
                    res += cum;
                    cum--;
                }
                start = i;
            }
        }

        int cum = s.size() - start;
        while (cum > 0) {
            res += cum;
            cum--;
        }

        return static_cast<int>(res % (1000000007)); 
        //return mod(res % (1000000007)); 
        // Modulo 10^9+7
    }
};
