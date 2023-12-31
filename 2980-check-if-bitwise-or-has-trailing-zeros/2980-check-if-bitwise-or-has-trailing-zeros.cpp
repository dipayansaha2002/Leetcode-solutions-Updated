class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int count = 0;
        for(auto ele:nums){
            count += (ele % 2 == 0);
            
            if(count >= 2){
                return 1;
            }
        }
        return 0;
    }
};
