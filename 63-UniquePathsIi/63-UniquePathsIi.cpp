// Last updated: 08/05/2026, 09:32:58
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

    int m= obstacleGrid.size();
    int n= obstacleGrid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,0));
    int down;
    int right;
    if(obstacleGrid[0][0]!=1)
    dp[0][0]=1;
    else{
    return 0;}

     for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            if(obstacleGrid[i][j]==1){
                continue;
            }
            down=0;
            right=0;
            if(i-1>=0){
                down= dp[i-1][j];
            }
            if(j-1>=0){
                right= dp[i][j-1];
            }
            if(i!=0 || j!=0)
            dp[i][j]=down+right;

        }
     }
     return dp[m-1][n-1];   
    }
    
};