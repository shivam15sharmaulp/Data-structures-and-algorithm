// Last updated: 08/05/2026, 09:29:14
class Solution {
public:
    vector<vector<int>> isConnected;
    
    void dfs(vector<bool> &visited, int i){
        visited[i]=true;
        for(int j=0; j<isConnected.size(); j++){
        if(isConnected[i][j]==1 && visited[j]==false){
        dfs(visited,j);    }
        }
        
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int len=isConnected[0].size();
        vector<bool> visited(len, false);
        int ans=0;
        this->isConnected= isConnected;
        for(int i=0; i<len;i++){
            if(visited[i]==false){
                dfs(visited,i);
                ans+=1;
            }
        }
        return ans;

    }
};