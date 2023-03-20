class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int p = 1 ;
        for( int i=0; i<flowerbed.size(); i++){
            if( p == 1 && flowerbed[i] == 0){
               if( flowerbed.size() > i+1 && flowerbed[i+1] == 0 ){
                 p-- ;
                   n-- ;
                   
               }
                else if( i+1 == flowerbed.size()){
                 p = 0 ;
                    n-- ;
                }
            }
            else if( flowerbed[i] == 0 ) p =1;
                else p = 0 ;
}
        return n<=0;
    }
};