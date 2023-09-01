class Solution {

public:

    vector<int> countBits(int n) {

        vector<int> ans;

        if(n==0)

        return {0};

        int x=0;

        while(x<=n)

        {

            int y=x;

            int count=0;

            while(y){

                if(y&1)

                count++;

                y>>=1;

            }

            ans.push_back(count);

            x++;

        }

        return ans;

    }

};