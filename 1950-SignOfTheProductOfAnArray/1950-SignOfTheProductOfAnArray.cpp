// Last updated: 08/05/2026, 09:27:50
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x=1;
        for(auto y: nums){
            if(y<0){
                x*=-1;
            }
            else if(y>0){
                x*=1;
            }
            else{
                x=0;
                break;
            }
        }

        return x;
        
    }
};