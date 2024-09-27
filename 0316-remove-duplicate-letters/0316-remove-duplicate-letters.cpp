class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        //vis array for char present in stack
        vector<int> vis(26,0),hash(26,0);
        for(auto c:s){
            hash[c-'a']++;
        }
        stack<char> st;
        for(auto c:s){
            hash[c-'a']--;
            if(vis[c-'a'])continue;
            while(!st.empty()&&st.top()>c &&hash[st.top()-'a']!=0){
                vis[st.top()-'a']=0;
                st.pop();
            } 
            st.push(c);
            vis[c-'a']=1;
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};