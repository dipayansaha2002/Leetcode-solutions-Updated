class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {

        int n=b.size(), m=b[0].size();
        if(n!=m || n!=9) return false; //check for board size

        //check for rows
        for(int i=0;i<n;i++){
            vector<int>mark(10,0);
            for(int j=0;j<n;j++){
                if(b[i][j]=='.') continue;
                if(mark[b[i][j]-'0']==1) return false;
                mark[b[i][j]-'0']=1;
            }
        }

        //check for columns
        for(int i=0;i<n;i++){
            vector<int>mark(10,0);
            for(int j=0;j<n;j++){
                if(b[j][i]=='.') continue;
                if(mark[b[j][i]-'0']==1) return false;
                mark[b[j][i]-'0']=1;
            }
        }

        //check for 3*3 square grid
        /*The two outer loops will provide the top right corner of 
         the square grids and the inner two loops will check for
         the repetitions in them using the mark vector. */

        for(int i=0;i<n;i+=3){
            for(int j=0;j<n;j+=3){
                vector<int>mark(10,0);
                for(int i1=i;i1<i+3;i1++){
                    for(int j1=j; j1<j+3;j1++){
                        if(b[i1][j1]=='.') continue;
                        if(mark[b[i1][j1]-'0']==1) return false;
                        mark[b[i1][j1]-'0']=1;
                    }
                }
            }
        }

        return true;

    }
};