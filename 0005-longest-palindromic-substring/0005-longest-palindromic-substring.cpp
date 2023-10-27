class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        
        int start = 0, end = 0, maxl = 1;
        
        // for odd length
        for(int i = 0; i < n; i++){
            int l = i, h = i;
            while(l>=0 && h<n){
                if(s[l] != s[h]) break;
                l--;
                h++;
            }
            int len = h-l-1;
            if(len > maxl){
                maxl = len;
                start = l+1;
                end = h-1;
            }
        }
        
        // for even length
        for(int i = 0; i < n; i++){
            int l = i, h = i+1;
            while(l>=0 && h<n){
                if(s[l] != s[h]) break;
                l--;
                h++;
            }
            int len = h-l-1;
            if(len > maxl){
                maxl = len;
                start = l+1;
                end = h-1;
            }
        }
        
        return s.substr(start, maxl);
    }
};