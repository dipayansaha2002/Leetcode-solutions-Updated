class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow]; //slow += 1
            fast = nums[nums[fast]]; //fast += 2
        } while(slow!=fast);
        fast = nums[0];  //fast init to 0 when slow=fast
        while(slow!=fast){
            slow = nums[slow]; //slow += 1
            fast = nums[fast]; //fast += 1
        }
        return slow; //gives the duplicate
    }
};