class Solution {
    public:
    int maxScore(string s) {
        int n = s.length();
        int ones = 0;
        int temp = s[0] == '0' ? 1 : 0;
        int score = temp;
        for (int i = 1; i < n-1; i++) {
            if (s[i] == '0') {
                temp += 1;
            } else {
                ones++;
                temp -= 1;
            }

            if (temp > score) {
                score = temp;
            }
        }
        ones += (s[n-1] == '1' ? 1 : 0);

        return ones + score;
    }
};