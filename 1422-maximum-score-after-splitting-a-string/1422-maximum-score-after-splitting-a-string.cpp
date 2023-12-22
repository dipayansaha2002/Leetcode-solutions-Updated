
class Solution {
    public: int maxScore(string s) {
        int ones = 0;
        int zeros = s[0] == '0' ? 1 : 0;
        int score = zeros;

        for (int i = 1; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                zeros++;
            } else {
                ones++;
            }

            int tmpScore = zeros - ones;
            score = max(score, tmpScore);
        }

        return ones + score + (s[s.length() - 1] == '1' ? 1 : 0);
    }
};
