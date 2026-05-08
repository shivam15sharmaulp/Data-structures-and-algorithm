// Last updated: 08/05/2026, 09:31:54
#include<deque>
class Solution {
public:

    vector<vector<int>> bfs(vector<vector<char>>& board,vector<vector<int>>& tochange, int x, int y, int& rows, int& cols ){
        vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
        std::deque<std::pair<int, int>> q{{x,y}};
        int nx;
        int ny;
        std::unordered_set<long long> id;
        while(!q.empty()){
            auto curr=q.front();
            q.pop_front();
            for(auto dr:dir){
                nx=curr.first+dr[0];
                ny=curr.second+dr[1];
                if(0<=nx && nx<cols && 0<=ny && ny<rows){
                    long long hash= ((long long) ny<<32|nx);
                    if(board[ny][nx]=='O' && (0==nx || nx==cols-1 || 0==ny || ny==rows-1)){
                        tochange.clear();
                        return tochange;
                    }
                    else if(board[ny][nx]=='O' && id.find(hash)==id.end()){
                        tochange.push_back({nx,ny});
                        
                        id.insert(hash);
                        q.push_back({nx,ny});
                    }
                    
                }
                
            }
            if(q.empty() && tochange.empty()){
                tochange.push_back({x,y});
            }

        }
        return tochange;
    }
    
    void solve(vector<vector<char>>& board) {
        int rows= board.size();
        int cols= board[0].size();
        vector<vector<int>> tochange;
        if(rows==1 && cols==1 && board[0][0]=='O'){
            return;
        }
        for(int x=1; x<cols-1;x++){
            for(int y=1; y<rows-1;y++){
                if(board[y][x]=='O'){
                bfs(board, tochange ,x, y, rows, cols);
                std::cout<<tochange.size()<<'\n';}

                for(auto pair:tochange){
                    board[pair[1]][pair[0]]='X';
                }
                tochange.clear();

            }
        }
    }
};