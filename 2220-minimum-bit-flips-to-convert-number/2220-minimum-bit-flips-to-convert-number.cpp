class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flips = 0, i = 0;
        while(start != goal){
            int mask = 1 << i;
            if((start & mask) == (goal & mask)){
                i++;
            }else{
                start = start ^ mask;
                flips++;
                i++;
            }
        }
        return flips;
    }
};