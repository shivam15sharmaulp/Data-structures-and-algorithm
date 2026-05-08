// Last updated: 08/05/2026, 09:28:46
#include <unordered_set>

class Solution {
public:
    

    void dfs(vector<vector<int>>& rooms, std::unordered_set<int>& visited, int x){
        for(int key: rooms[x]){
            if(visited.insert(key).second){
            dfs(rooms, visited,key);
            }
        } 

    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        std::unordered_set<int> visited{};
        visited.insert(0);

        dfs(rooms, visited,0);
        
        return rooms.size()==visited.size();
    }
};