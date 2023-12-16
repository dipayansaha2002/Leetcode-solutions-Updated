class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int map[26] = {0};
        for (char x : s) {
            map[x - 'a']++;
        }
        for (char x : t) {
            map[x - 'a']--;
        }
        for (int i : map) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }
};
