// Last updated: 08/05/2026, 09:33:47
class Solution {
public:
    void backtrack(vector<string>& fa, string& curr, int& open, int& close, int& max){
        if(curr.size()==2*max){
            fa.push_back(curr);
        }

        if(open<max){
            curr=curr+'(';
            open=open+1;
            backtrack(fa,curr,open, close, max);
            curr.pop_back();
            open-=1;
        }

        if(close<open){
            curr=curr+')';
            close+=1;
            backtrack(fa,curr,open, close, max);
            curr.pop_back();
            close-=1;
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> fa;
        string curr;
        int open=0;
        int close=0;
        backtrack(fa, curr, open,close,n);
        return fa;
        
    }
};