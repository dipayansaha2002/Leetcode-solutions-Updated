class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int x : nums) 
        pq.push(x);
        k--;
        while(k--) 
        pq.pop();
        return pq.top();
    }
};