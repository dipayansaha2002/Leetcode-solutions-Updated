class Solution {
public:
    int isPalindrome( const string& s, int left, int right){
     int count = 0;
     while(left>=0 && right<s.length() && s[left] == s[right]){
         left-- ;
         right++ ;
         count++ ;
     }
     return count;
 }
    int countSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        for(int i=0; i<n; i++){
         int even = isPalindrome(s,i,i+1);
         int odd = isPalindrome(s,i,i);
            ans += odd + even ;
        }
        return ans;
    }
};
 