// Last updated: 08/05/2026, 09:33:50
#include<stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        string top;
        int i=0;
        sta.push(s[i]);
        i+=1;
        while(i<s.size()){
            if(!sta.empty()){
            if(s[i]==')' && sta.top()=='('){
                sta.pop();
                i+=1;
            }
            else if(s[i]=='}' && sta.top()=='{'){
                sta.pop();
                i+=1;
            }
            else if(s[i]==']' && sta.top()=='['){
                sta.pop();
                i+=1;
            }
            else{
            sta.push(s[i]);
            i+=1;
            }}
            else{
            sta.push(s[i]);
            i+=1;}
        }

        if(sta.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};