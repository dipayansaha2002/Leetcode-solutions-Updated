class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans=0;
        for(int x:nums)
            freq[x]++;
        for(auto [x, f]: freq){
            if (f==1) return -1;
            auto [q, r]=div(f, 3);
            ans+=q+(r!=0);
            // if(f==2 || f==3) ans += 1;
            // if(f%2==0 && f>2) ans += (f/2);
            // if(f%3==0 && f>3) ans += (f/3);
        }
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();