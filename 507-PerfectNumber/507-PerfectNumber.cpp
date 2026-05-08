// Last updated: 08/05/2026, 09:29:19
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int nn=0;

        for(int i=1; i*i< num; i++){
            if(num%i==0){
                nn+=i;

    
            if((num/i)!=i && (num/i)<num){
                nn+=num/i;

            }}
            
        }
            return num==nn;
    }

};