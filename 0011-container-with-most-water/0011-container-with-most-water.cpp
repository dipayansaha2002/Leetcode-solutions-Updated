class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        while(left < right){
            int width = (right - left);
            int h = min(height[left], height[right]);
            int currWater = width*h;
            maxWater = max(maxWater, currWater);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};