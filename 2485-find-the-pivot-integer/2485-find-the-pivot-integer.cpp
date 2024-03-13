class Solution {
public:
    int pivotInteger(int n) {
    int total = n * (n + 1) / 2;
    int left = 0;
    for(int k = 1;k <= n;++k){
        left += k;
        int right = total - left + k;
        if(left == right) return k;
    }
    return -1;
}
  };