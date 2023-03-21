#define ll long long
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0, p =0 ;
        for( int i=0; i<=nums.size(); i++ ){

        if( i < nums.size() && nums[i] == 0 ){
        p++;    
        }
            else if(p != 0){
            ans += p*(p+1)/2 ;
                p = 0;
            }
        }
        return ans ;
    }
};