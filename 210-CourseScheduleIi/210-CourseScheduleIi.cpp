// Last updated: 08/05/2026, 09:30:43
#include<unordered_map>
class Solution {
public:
    bool dfs(unordered_map<int, vector<int>>& mapping, int k , vector<int>& ans, vector<int>& visited){
        if(visited[k]==1){
            return false;
        }
        if(visited[k]==2){
            return true;
        }
        visited[k]=1;

        for(auto x: mapping[k]){
            if(!dfs(mapping, x, ans, visited)){
                return false;
            }
        }

        ans.push_back(k);
        visited[k]=2;
        return true;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> mapping;
        if(numCourses==1){
            return {0};
        }

        for(auto x : prerequisites){
            mapping[x[0]].push_back(x[1]);
        }
        int n = prerequisites.size();
        vector<int> ans;
        vector<int> visited(numCourses, 0);
        for(int k=0; k<numCourses;k++){
            // ans={};
            if(!dfs( mapping, k, ans, visited)){
                return {};
            }
            
        }
        if(ans.size()==numCourses){
                return ans;
            }
        else
        return {};
    }
};