// Last updated: 08/05/2026, 09:28:31
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1){
            return "";
        }
        
        auto GCD= []( int len1, int len2){
            while(len2!=0) {
            int rem=len1 % len2;
            len1= len2;
            len2 = rem;
            
            }
            return len1;
        };
        int lenGCD= GCD(str2.length(),str1.length());

        return str1.substr(0,lenGCD);

    }
};