// Last updated: 08/05/2026, 09:30:47
#include<unordered_map>
class Solution {
public:

    bool dfs(unordered_map<int, vector<int>>& mapping,std::vector<int>& visited, int key){
        if(visited[key]==1){
            //cout<<"first:"<<visited[0]<<"second"<<visited[1]<<"\n";
            //cout<<"size of visited"<<visited.size()<<"\n"<<"key is"<<key<<"\n";
            return false;
        }
        if(visited[key]==2){
            //cout<<"first:"<<visited[0]<<"second"<<visited[1]<<"\n";
            //cout<<"size of visited"<<visited.size()<<"\n"<<"key is"<<key<<"\n";
            return true;
        }
        visited[key]=1;
        for(auto x: mapping[key]){
        if(!dfs(mapping, visited, x)) {
            return false;
        }       }
    visited[key]=2;
    return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.empty()){
            return true;
        }
        unordered_map<int, vector<int>> mapping;
    
        for(auto ab:prerequisites){
                mapping[ab[0]].push_back(ab[1]);
        }
        std::vector<int> visited(numCourses, 0);
        bool ans=true;
        for(auto val:mapping){

        ans= dfs(mapping,visited, val.first);
        //cout<<ans<<"\n";
        if(!ans){
            return false;
        }
        }
        //std::cout<<mapping[1][0];
        return true;

    }
}; 