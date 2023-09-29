class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() < 2) return true;

        int check = 0;  // 0 means unknown, 1 means increasing, -1 means decreasing

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {  // increasing
                if (check == 0) check = 1; 
                
                else if (check == -1) return false;
            } 
            
            else if (nums[i] < nums[i-1]) {  // decreasing
                
                if (check == 0) check = -1;
                else if (check == 1) return false;
            }
        }

        return true;
    }
};