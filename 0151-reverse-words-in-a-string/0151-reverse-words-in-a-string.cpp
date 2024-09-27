class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        int left = 0, right = words.size() - 1;
        while (left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }
        string result;
        for (const auto& w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w;
        }
        return result;
    }
};