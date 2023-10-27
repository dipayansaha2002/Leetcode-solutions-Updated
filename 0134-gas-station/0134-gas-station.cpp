class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int cm=0,mx=-2e9,mxidx=-1;
        int n=cost.size();
        for(int i=n-1;i>=0;i--){
            cm+=gas[i]-cost[i];
            if(cm>mx){
                mx=cm;
                mxidx=i;
            }
        }
        if(cm>=0)return mxidx;
        return -1;
    }
};