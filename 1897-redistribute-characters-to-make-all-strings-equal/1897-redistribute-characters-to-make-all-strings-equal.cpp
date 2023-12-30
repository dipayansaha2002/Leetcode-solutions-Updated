class Solution{
    public:
    
    bool makeEqual(vector<string>& words) {
    //Optimizing input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Initialize an array to store character frequencies
    int freq[26] = {0};
    int n = words.size(); // Total number of strings

    //Iterate through each string in the array
    for(auto x : words) {
        //Update character frequencies
        for(auto ch : x) {
            freq[ch - 'a']++;
        }
    }

    //Check if character counts are divisible by the total number of strings
    for(int i = 0; i < 26; i++) {
        if(freq[i] % n != 0)
            return false;
    }

    //All strings can be made equal
    return true;
}
};