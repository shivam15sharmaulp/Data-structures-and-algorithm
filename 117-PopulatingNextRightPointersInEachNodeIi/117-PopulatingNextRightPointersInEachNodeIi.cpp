// Last updated: 08/05/2026, 09:32:07
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        
        // Start with the root node
        Node* curr = root;
        
        while (curr) {
            Node* dummy= new Node(0);  // First node of the next level
            Node* tail = dummy;        // Previous node on the current level
            
            // Traverse the current level
            while (curr) {
                // Process left child
                if (curr->left) {
                    tail->next= curr->left;
                    tail= tail->next;
                }
                
                // Process right child
                if (curr->right) {
                    tail->next= curr->right;
                    tail= tail->next;
                }

                curr= curr->next;
                // Move to the next node on this level
                
            }
            curr = dummy->next;
            // Move to the next level
            delete dummy;
        }
        
        return root;
    }
};

// class Solution {
// public:

//     Node* prev= nullptr;
//     Node* leftmost= nullptr;
//     void childnode(Node* node){
//         if(node){
//         if (prev){
//             prev->next= node;
//         }
//         else{
//             leftmost= node;
//         }
//         prev= node;
//             }    }

//     void dfs(Node* node, int level){
//         if(!node){
//             return;
//         }
//         if (level>0){
//             childnode(node);
//         }
//         Node* oldprev= prev;
//         Node* oldleftmost= leftmost;
//         prev= nullptr;
//         leftmost= nullptr;

//         dfs(node->left,level+1);
//         dfs(node->right, level+1);

//         prev= oldprev;
//         leftmost= oldleftmost;
        
//     }
//     Node* connect(Node* root) {
//         dfs(root, 0);
//         return root;      
//     }
// };