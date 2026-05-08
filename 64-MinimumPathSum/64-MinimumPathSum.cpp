// Last updated: 08/05/2026, 09:32:56
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m= grid.size();
        int n= grid[0].size();
        int down;
        int right;
        
        vector<vector<int>> dp(m, vector<int>(n,-1));
        dp[0][0] = grid[0][0];
        for( int i=0; i<m;i++){
            for( int j=0; j<n;j++){
                if(i==0 && j==0){
                   continue;
                }
                down= INT_MAX;
                right= INT_MAX;
                //Down
                if(i-1>=0)
                    down=grid[i][j]+dp[i-1][j];
                
                if(j-1>=0)
                    right= grid[i][j]+ dp[i][j-1];
                
                dp[i][j]= min(down, right);
            }
        }
        return dp[m-1][n-1];
    }
};