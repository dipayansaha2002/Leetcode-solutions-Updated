class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minCost = INT_MAX;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int cost = prices[i] + prices[j];

                if (cost < minCost) {
                    minCost = cost;
                }
            }
        }
        return (minCost <= money)?money - minCost: money;
    }
};