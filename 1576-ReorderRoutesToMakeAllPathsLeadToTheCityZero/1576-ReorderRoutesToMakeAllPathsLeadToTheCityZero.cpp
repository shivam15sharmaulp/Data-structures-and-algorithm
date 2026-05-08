// Last updated: 08/05/2026, 09:28:09
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

class Solution {
public:
    // vector<vector<int>> connections;
    unordered_set<long long> reversedc;
    int ans;
    void dfs(std::unordered_map<int,vector<int>>& pairs,int city, int parent){
        
        for(int x: pairs[city]){
            if(x==parent){
                continue;
            }
            long long hash= ((long long)city<<32) | x;
            if(reversedc.find(hash)!=reversedc.end()){
                this->ans+=1;
            }
            dfs(pairs, x, city);
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        // this->connections= connections;
        this->reversedc.clear();
        this->ans=0;
        std::unordered_map<int,vector<int>> pairs; 
        for(vector<int> p: connections){
            pairs[p[0]].push_back(p[1]);
            pairs[p[1]].push_back(p[0]);
            long long hash= ((long long) p[0]<<32) | p[1];
            this->reversedc.insert(hash);
        }
        dfs(pairs,0,-1);
 
    return ans;
    }
};