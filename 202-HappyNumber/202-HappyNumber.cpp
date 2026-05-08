// Last updated: 08/05/2026, 09:30:56
#include<unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> sets;
        while(sets.find(happy(n))==sets.end()){
        sets.insert(happy(n));
        n= happy(n);
        if(n==1){
            return true;
        }
        }
        return false;

    }

private:
    int happy(int n){
        int sum=0;
        while(n){
            int x= n%10;
            sum+=x*x;
            n= n/10;
        }
        return sum;
    }
};