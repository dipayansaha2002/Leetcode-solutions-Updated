class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = (start ^ goal); //XOR gives the setbits
        int count = 0; //count the set bits
        while(a){
            if(a&1){ //AND gives 1 with a(having set bit 1) 
                count++;
            }
        a = a>>1; //if not set bit, then do rightshift
        }
        return count;
    }
};