// Last updated: 08/05/2026, 09:28:37
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int glomax=nums[0];
        int glomin= nums[0];

        int currmax= 0;
        int currmin= 0;
        int total=0;
        for(auto x: nums){
            total+=x;
            currmax= std::max(currmax+x, x);
            glomax= std::max(currmax, glomax);
            currmin= std::min(currmin+x,x);
            glomin= std::min(glomin,currmin);
        }

        if(glomax<0){
            return glomax;
        }
        return std::max(glomax, total-glomin);


    }
};