class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n+1);
        for(int i = 1; i<=n;i++){
            dp[i] = dp[i-1]+1;
            for(const string & str : dictionary){
                int m = str.size();
                if(i>=m){
                    int j = i-m;
                    while(j<i){
                        if(s[j] != str[j-i+m]){
                            break;
                        }
                        j++;
                    }
                    if(i==j)
                        dp[i] = min(dp[i],dp[i-m]);
                }
            }
        }
        return dp[n];
    }
};
static int init = [](){ 
std::ios_base::sync_with_stdio(false); 
std::cin.tie(nullptr); 
return 0; 
}
();
