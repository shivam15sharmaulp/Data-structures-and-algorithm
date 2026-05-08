// Last updated: 08/05/2026, 09:32:51
class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0){
            return x;
        }

        long long left=1;
        long long right=x;
        long long mid;
        long long result;
        while(left<=right){
            mid=(left+((right-left)/2));
            if((x)<mid*mid){
                right= mid-1;
            }
            else if((x)>mid*mid){
                left=mid+1;
                result= mid;
            }   
            else{
                return mid;
            }
        }
        return result;
        
    }
};