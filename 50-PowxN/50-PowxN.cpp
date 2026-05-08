// Last updated: 08/05/2026, 09:33:18
class Solution {
public:
    double recur(double x, int n){
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }

        double ans=recur(x*x, n/2);

        return n%2==0 ? ans : x*ans;
    }
    
    double myPow(double x, int n) {

        double ans=recur(x,std::abs(n));

        return n<0 ? 1/ans : ans;

        
    }
};