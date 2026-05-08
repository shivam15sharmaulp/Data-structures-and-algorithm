// Last updated: 08/05/2026, 09:28:47
class Solution {
public:
    int numTilings(int n) {

        vector<long long> dp(1001,0);
        int md= 1e9;
        md+=7;
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;

        if(n<=3){
            return dp[n];
        }

        for(int i=4; i<=n;++i){
            dp[i]= dp[i-3]+2*dp[i-1];
            dp[i]%=md;
        }
        return dp[n];
        
    }
};