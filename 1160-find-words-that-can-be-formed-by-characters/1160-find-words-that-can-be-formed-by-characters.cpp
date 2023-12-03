class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char, int> charCount;

        for (char c : chars)
            charCount[c]++;

        for (const string& word : words) {
            unordered_map<char, int> wordCount = charCount;
            int count = 0;

            for (char c : word) {
                if (wordCount[c] > 0) {
                    wordCount[c]--;
                    count++;
                }
            }

            if (count == word.length())
                ans += count;
        }

        return ans;
    }
};