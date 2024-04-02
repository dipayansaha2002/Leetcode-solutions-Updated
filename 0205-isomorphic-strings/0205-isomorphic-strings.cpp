class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2 ;
        int n = s.size() ;
        for(int i=0; i<n; i++){
            if(m1.count(s[i])){
                if(m1[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                if(m2.count(t[i])){
                    return false;
                }
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
        }
        return true ;

    }
};