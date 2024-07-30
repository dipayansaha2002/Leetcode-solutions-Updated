class Solution {
public:
 int minimumDeletions(string s) {
    int n=s.length();
    //get the count of a's in the first pass
    int count_a=0;
    for(int i=0;i<n;i++) if (s[i]=='a') count_a++;
    int count_b=0;
    int ans=n;
    //second pass
    //as you iterate through the string count b
    for(int i=0;i<n;i++)
    {
        if (s[i]=='a') count_a--;
        ans=min(ans,count_a+count_b);
        if (s[i]=='b') count_b++;
    }
    return ans;
    
}
};