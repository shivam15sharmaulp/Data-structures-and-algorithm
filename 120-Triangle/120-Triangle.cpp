// Last updated: 08/05/2026, 09:32:06
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=0; i<n-1; i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    triangle[i+1][j]+=triangle[i][j];
                }
                if(j+1<=i)
                triangle[i+1][j+1]+=min(triangle[i][j],triangle[i][j+1]);
                else{
                triangle[i+1][j+1]+=triangle[i][j];
            }
            }
        }
        return *min_element(begin(triangle[n-1]), end(triangle[n-1]));
    }
};