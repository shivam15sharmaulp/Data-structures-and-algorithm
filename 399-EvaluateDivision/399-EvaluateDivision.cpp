// Last updated: 08/05/2026, 09:29:39
#include<unordered_map>
#include<unordered_set>


class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n= equations.size();
        
        std::unordered_map<string, unordered_map<string,double>> graph;
        for(int i=0; i<n; i++){
                graph[equations[i][0]][equations[i][1]]=values[i];
                graph[equations[i][1]][equations[i][0]]=1/values[i];   
        }      

        vector<double> results;
        string start;
        string end;
        for(auto query: queries){
            start= query[0];
            end= query[1];

            if(graph.find(start)==graph.end() || graph.find(end)==graph.end()){
                results.push_back(-1.0);
                continue;
            }
            
            queue<pair<string, double>> q;
            unordered_set<string> visited;
            bool found= false;

            q.push({start,1});
            visited.insert(start);

            while(!q.empty() && !found){
                auto [node,value]= q.front();
                q.pop();

                if(node==end){
                    results.push_back(value);
                    found= true;
                    break;
                }

                for(const auto& [neighbor, weight]: graph[node]){
                    if(visited.find(neighbor)==visited.end()){
                        visited.insert(neighbor);
                        q.push({neighbor, weight*value});
                    }
                }
            }
            if(!found){
                results.push_back(-1.0);
            }


        }

    return results;
    }
};