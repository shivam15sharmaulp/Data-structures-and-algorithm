// Last updated: 08/05/2026, 09:30:32
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n1= matrix.size();
        int n2= matrix[0].size();

        vector<vector<int>> dp(n1+1, vector<int>(n2+1,0));
        int maxvalue=0;
        for(int i=1; i<=n1;i++){
            for(int j=1; j<=n2; j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]= 1+ min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
                }
                maxvalue= max(maxvalue, dp[i][j]);
            }
        }
        return maxvalue* maxvalue;
    }
};