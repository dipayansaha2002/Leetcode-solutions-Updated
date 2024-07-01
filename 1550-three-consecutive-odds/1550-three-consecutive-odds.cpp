class Solution {
public:
    static bool threeConsecutiveOdds(vector<int>& arr) {
        const int n=arr.size();
        for(int i=0; i<n; i++){
            i=find_if(arr.begin()+i, arr.end(), 
            [](int x){return (x&1);})-arr.begin();
            
            if (i+2<n && (arr[i+1]&1) && (arr[i+2]&1)) return 1;
        }
        return 0;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();