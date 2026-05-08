// Last updated: 08/05/2026, 09:29:34
#include<unordered_set>
class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
     unordered_set<string> visited;
     unordered_set<string> bankset;
     int level=0;
     for(auto x : bank){
        bankset.insert(x);
     }
     visited.insert(startGene);
     deque<string> q;
     q.push_back(startGene);
     while(!q.empty()){
        int n= q.size();
        while(n--){
            string hand=q.front();
            q.pop_front();
            if(hand==endGene){
                return level;
            }
            for(auto x: "ACGT"){
                for(int i=0;i<8;i++){
                    string check= hand;
                    check[i]=x;
                    if(bankset.find(check)!=bankset.end() && visited.find(check)==visited.end()){
                        q.push_back(check);
                        visited.insert(check);
                    }
                }
            }

        }
        level+=1;
     }
     return -1;
    }
};