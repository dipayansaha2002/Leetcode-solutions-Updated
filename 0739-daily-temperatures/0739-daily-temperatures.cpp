class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> results(temperatures.size(), 0);
        
        stack<int> st;
        st.push(0);

        for (int i = 1; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
             results[st.top()] = i - st.top();
             st.pop();
            }
            st.push(i);
        }

        return results;
    }
};