class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> lastOccur;
        int maxLen = -1;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (lastOccur.count(c)) {
                maxLen = max(maxLen, i - lastOccur[c] - 1);
            } else {
                lastOccur[c] = i;
            }
        }
        return maxLen;
    }
};
