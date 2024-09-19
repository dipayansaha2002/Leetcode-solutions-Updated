class Solution {
private:
    vector<int> computeWays(string exp) {
        vector<int> result;

        for (int i = 0; i < exp.size(); ++i) {
            char ch = exp[i];

            if (ch == '+' || ch == '-' || ch == '*') {
                vector<int> left = computeWays(exp.substr(0, i));
                vector<int> right = computeWays(exp.substr(i + 1));

                for (int l : left) {
                    for (int r : right) {
                        if (ch == '+') {
                            result.push_back(l + r);
                        } 
                        else if (ch == '-') {
                            result.push_back(l - r);
                        } 
                        else if (ch == '*') {
                            result.push_back(l * r);
                        }
                    }
                }
            }
        }

        if (result.empty()) {
            result.push_back(stoi(exp));
        }

        return result;
    }

public:
    vector<int> diffWaysToCompute(string exp) {
        return computeWays(exp);
    }
};
