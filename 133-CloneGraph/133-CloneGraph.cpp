// Last updated: 08/05/2026, 09:31:51
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
#include<unordered_map>
class Solution {
public:
    Node* bfs(Node* node){
        vector<Node*> neighbors= node->neighbors;
        Node* curr;
        Node* pns= new Node(node->val);
        std::unordered_map<Node*, Node*> map;
        map[node]=pns;
        std::deque<Node*> q{node};
        while(!q.empty()){
            curr= (q.front());
            q.pop_front();
            pns=map[curr]    ;
            for(auto nei: curr->neighbors){
                if(map.find(nei)==map.end()){
                Node* nn= new Node(nei->val);
                map[nei]=nn;
                q.push_back(nei);
                pns->neighbors.push_back(nn);}
                else{
                pns->neighbors.push_back(map[nei]);    
                }
                
            }
        }
        return map[node];
    }
    
    Node* cloneGraph(Node* node) {
        if(!node){
            return node;
        }
        if((node->neighbors).empty()){
            Node* nn= new Node(node->val);
            return nn;
        }
        return bfs(node);
    }
};