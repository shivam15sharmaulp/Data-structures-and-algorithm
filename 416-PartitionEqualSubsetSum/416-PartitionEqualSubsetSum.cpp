// Last updated: 08/05/2026, 09:29:37
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x: nums){
            sum+=x;
        }
        if(sum%2!=0)
        return false;
        int target= sum/2;
        

        vector<int> dp(target+1,false);
        dp[0]=true;
        
        for( auto x: nums){
            if(dp[target]){
                return true;
            }
            for(int i=target;i>=x;i--){
                dp[i]= dp[i] || dp[i-x];        }
        
    }
    return dp[target];
    }
};