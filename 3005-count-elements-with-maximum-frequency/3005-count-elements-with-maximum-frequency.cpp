class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int mx=0;
        unordered_map<int, int> mp;
        for(int i=0; i< nums.size(); i++){
            mp[nums[i]]++;
            mx = max(mx, mp[nums[i]]);
        }
        
        int sum =0;
        for(auto it: mp){
            if(it.second == mx){
                sum += it.second;
            }
        }
        return sum;
    }
};