class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto comp=[](string & s1,string & s2){
            if(s1+s2>s2+s1) return true;
            return false;
        };
        vector<string> num;
        for(auto i:nums){
            num.push_back(to_string(i));
        }
        sort(num.begin(),num.end(),comp);
        string ans="";
        for(auto i:num){
           ans+=i;
        }
        if(ans[0]=='0') return "0";
        return ans;
    }
};