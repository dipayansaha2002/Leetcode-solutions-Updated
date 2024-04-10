class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> Q;
        int n=deck.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++)
            Q.push(i);
        
        sort(deck.begin(),deck.end());
        int i=0;
        
        while(!Q.empty() && i<n){
            ans[Q.front()] = deck[i];
            Q.pop();
            Q.push(Q.front());
            Q.pop();
            i++;
        }
        return ans;
    }
};