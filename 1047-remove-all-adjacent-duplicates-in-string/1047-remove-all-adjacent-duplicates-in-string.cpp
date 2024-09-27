class Solution {
public:
    string removeDuplicates(string s) {
        string ans= "";
        for(int i=0; i<s.length(); i++){
            if(ans.length() && ans[ans.size()-1] == s[i]){
                ans.pop_back();
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};