// Last updated: 08/05/2026, 09:33:13
#include<cmath>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefix=0;
        int curr=0;
        double max=-INFINITY; 
        int n= nums.size();  
        for(int i=0; i<n; i++){
            curr=nums[i];
            if(prefix<=0){
                prefix= curr;
            }
            else{
                prefix+=curr;
            }
            if(prefix>max){
                max=prefix;
            }
        }    
    return max;
    }
};