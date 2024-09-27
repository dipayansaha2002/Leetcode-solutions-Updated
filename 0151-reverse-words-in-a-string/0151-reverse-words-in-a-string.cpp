class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string> st;
        string result;
        for(int i=0; i<n; i++){
            string word;
            if(s[i] == ' ') continue;
            while(i<n && s[i] != ' '){
                word += s[i];
                i++;
            }
            st.push(word);
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
            if(!st.empty()) result += " ";
        }
        return result;
    }
};