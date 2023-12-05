class Solution {
public:
    int numberOfMatches(int n) {
        
        if(n==1){   // Base Case
           return 0;
        }
        
        if( n%2 == 0 ){  // if number of matches are even
           return n/2 + numberOfMatches(n/2) ;
        }
        else {//if( n%2 != 0 ){  // if number of matches are odd
           return (n-1)/2 + numberOfMatches((n-1)/2 +1) ;
        }
    }   
};