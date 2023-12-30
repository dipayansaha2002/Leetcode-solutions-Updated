class Solution {
public:
    bool makeEqual(vector<string>& words) {
        //Array to store the count of each character (initialized to 0)
        vector<int> characterCount(26, 0);
        
        for (const string& inputWord : words) {
            for (char inputChar : inputWord){
                characterCount[inputChar - 'a']++;
            }
        }
        //Check if the count of each character is divisible by the total number of words.
        for (int count : characterCount) {
            if (count % words.size() != 0) {
                //If not divisible, characters cannot be rearranged to make all words equal.
                return false;
            }
        }
        //If all characters can be rearranged to make words equal, return true.
        return true;
    }
};