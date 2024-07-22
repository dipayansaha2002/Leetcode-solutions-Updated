class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {
        int n = names.size();
        unordered_map<int, string> mp;

        for(int i=0;i<n;i++){
            mp[height[i]] = names[i];
        }

        sort(height.rbegin(),height.rend());

        for(int i=0;i<n;i++){
            names[i]=mp[height[i]];
        }
        return names;
    }
};