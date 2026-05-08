// Last updated: 08/05/2026, 09:30:08
class Solution {
public:
    int numSquares(int n) {

        static vector<int> ans({0});

        while(ans.size()<=n){
            int tmp= INT_MAX;
            int m= ans.size();
            for(int i=1; i*i<=m;i++){
                tmp= min(tmp, ans[m-i*i]+1);
            }
            ans.push_back(tmp);

        }
        return ans[n];
    }
};