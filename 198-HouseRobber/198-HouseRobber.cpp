// Last updated: 08/05/2026, 09:31:03
class Solution {
public:
    int rob(vector<int>& nums) {

        int rob1=0;
        int rob2=0;
        int temp=0;

        for(auto x : nums){
            temp= max(rob1+x, temp);
            rob1=rob2;
            rob2= temp;
        }
        
        
        return temp;
        
    }
};