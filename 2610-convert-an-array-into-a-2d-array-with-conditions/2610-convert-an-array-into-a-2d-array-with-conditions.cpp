             // TC:O(NlogN) // sorting
             // sc: O(n) 

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ll; //Create a list of list
        sort(nums.begin(), nums.end()); //Sorting ensures to bring identical elements together
        int count = 0, mx = 1; //count to calculate the freq of elements in nums and mx to calculate the max of count
        ll.push_back(vector<int>());//Push the empty sublist first into the list
        ll[0].push_back(nums[0]);//Push 1st element into the first sublist

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
                if (count < mx) {
                    ll[count].push_back(nums[i]);//Push nums[i] into the count valued sublist of ll
                } else {
                    ll.push_back(vector<int>());//if count > mx then create an empty new sublist in the ll
                    mx++;
                    ll[count].push_back(nums[i]);//Push that element into the new sublist of ll
                }
            } else { //if alternate elements are dissimilar then update count to 0 and add that element to the count valued sublist of ll
                count = 0;
                ll[count].push_back(nums[i]);
            }
        }
        return ll; // ll = [[a,b,c,d][d,e],[e]] type of answer
    }
};
