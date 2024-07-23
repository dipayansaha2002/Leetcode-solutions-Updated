class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>mp1;
        for(auto i:mp){
           mp1.push_back({i.second,i.first});
        }
        sort(mp1.begin(),mp1.end(),comp);
        vector<int>ans;
        for(auto i:mp1){
            int x=i.first;
           while(x--){
            ans.push_back(i.second);
           }
        }
        return ans;
    }
};