// Last updated: 08/05/2026, 09:29:42
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result=0;

        for(char x:s){
            result^=x;
        }

        for(char y:t){
            result^=y;
        }

        return char(result);
    }
};