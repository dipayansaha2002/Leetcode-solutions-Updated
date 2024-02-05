class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> storage; 
        queue<pair<char, int>> uniqueChar; 

        for(int i = 0 ; i < s.size() ; i++) {
            if(storage.find(s[i]) == storage.end()) {
                uniqueChar.push({s[i], i});
            } 
            storage[s[i]]++;
        }

        while(!uniqueChar.empty()) {
            pair<char, int> frontElement = uniqueChar.front();

            if(storage.find(frontElement.first) != storage.end() && storage[frontElement.first] == 1) {
                return frontElement.second;
            }

            uniqueChar.pop();
        }

        return -1;
    }
};