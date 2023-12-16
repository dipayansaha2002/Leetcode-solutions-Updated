class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        vector<int>ans;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);

            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int k=0;
        int l=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                ans.push_back(pos[k]);
                k++;
            }
            else{
                ans.push_back(neg[l]);
                l++;
            }
        }
        return ans;
            
    }
};