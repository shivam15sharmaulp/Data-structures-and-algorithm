// Last updated: 08/05/2026, 09:32:37
class Solution {
public:

    bool recur(vector<vector<char>>& board, string& word, int i, int j, vector<std::pair<int, int>>& dir, int start, vector<vector<bool>>& visited){
        if(start==word.size()){
            return true;
        }
        if(0>i || i>=board.size() || 0>j || j>=board[0].size() || board[i][j]!=word[start] || visited[i][j]){
            return false;}
        visited[i][j]= true;
        int x;
        int y;
        for(auto dr: dir){
            y= dr.first+i;
            x= dr.second+j;
            if(recur(board, word,y,x, dir, start+1, visited)){
                return true;}
            }
        visited[i][j]= false;
         return false;   
        
        }
        
    bool exist(vector<vector<char>>& board, string word) {
        vector<std::pair<int, int>> dir={{1,0}, {0,1}, {-1,0}, {0,-1}};
        string curr;
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        int i=0;
        int j=0;
        int start=0;
        for(int i=0; i<board.size();i++){
            for(int j=0; j<board[0].size(); j++){
                if(recur(board, word, i ,j, dir, start, visited)){
                    return true;
                }
            }
        }

        return false;
    }
};