// Last updated: 08/05/2026, 09:33:59
#include<unordered_map>

class Solution {
public:

    #include <unordered_map>
#include <string>

    unordered_map<char, string> keyboard = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

    void recur(int k, string& digits,string& x, vector<string>& solu){
        if(k==digits.length()){

            solu.push_back(x);
        }
        
        for(char c: keyboard[digits[k]]){
            x.push_back(c);
            recur(k+1,digits,x, solu);
            x.pop_back();
        }
        
    }


    vector<string> letterCombinations(string digits) {
        
        string x;
        vector<string> solu;

        if(digits.size()<1){
            return solu;
        }
        recur(0, digits,x, solu);
        return solu;
    }
};