// Last updated: 08/05/2026, 09:31:00
#include <deque>
class Solution {
public:
    void bfs(vector<vector<char>>& grid, int y, int x, int xlen, int ylen){
        std::deque<std::pair<int, int>> q;
        q.push_back(std::make_pair(x,y));
        grid[x][y]='2';
        std::vector<std::pair<int, int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        int nx;
        int ny;
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop_front();
            
            for(auto dr:dir){
               nx=x+dr.first;
               ny=y+dr.second;
                if(0<=nx && nx<ylen && 0<=ny && ny<xlen){
                    if(grid[nx][ny]=='1'){
                        q.push_back(std::make_pair(nx, ny));
                        grid[nx][ny]='2';
                    }
                    else{
                        continue;
                    }
                }

            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int xlen= grid[0].size();
        int ylen= grid.size();
        int ni=0;
        for(int i=0;i<ylen;i++){
            for(int j=0;j<xlen;j++){
                if(grid[i][j]=='1'){
                    bfs(grid, j, i, xlen, ylen);
                    ni+=1;
                }
                else{
                    continue;
                }
            }
        }
    return ni;
    
    }
};