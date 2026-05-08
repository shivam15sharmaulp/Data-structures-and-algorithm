// Last updated: 08/05/2026, 09:33:34
class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> stac;
        stac.push(-1);
        int longest=0;

        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                stac.push(i);
            }
            else{
                stac.pop();
                if(stac.empty()){
                    stac.push(i);
                }
                longest= max(longest, i-stac.top());
            }
        }
        return longest;}
        
};