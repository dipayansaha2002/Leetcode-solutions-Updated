class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        //if(n==0) return -1;
        unordered_map<int,int> mp;
        for(int x: arr){
            mp[x]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if( it->second > n/4 ){
                return it->first;
            }
        }
       return -1; 
    }
};