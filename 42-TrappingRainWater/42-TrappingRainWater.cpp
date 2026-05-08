// Last updated: 08/05/2026, 09:33:25
#include<numeric>
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);
        int maxleft=0;
        for(int i=1;i<=n-1;i++){
            leftmax[i]= max(maxleft, height[i-1]);
            maxleft= leftmax[i];
        }
        int maxright=0;
        for(int j=n-2;j>=0;j--){
            rightmax[j]=max(maxright,height[j+1]);
            maxright=rightmax[j];
        }

        vector<int> ans(n,0);

        for(int i=1;i<=n-2;i++){
            int x=min(leftmax[i],rightmax[i])- height[i];
            ans[i]= x>0?x:0;
        }
        return std::accumulate(ans.begin(), ans.end(),0);
        
    }
};