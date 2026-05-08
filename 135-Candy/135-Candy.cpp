// Last updated: 08/05/2026, 09:31:48
#include<numeric>
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        vector<int> candy(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
            }
        }
        for(int j=n-2;j>=0;j--){
            if(ratings[j]>ratings[j+1] && candy[j]<=candy[j+1]){
                candy[j]=candy[j+1]+1;
            }
        }

        return std::accumulate(candy.begin(), candy.end(),0);
    }
};