// Last updated: 09/05/2026, 17:57:15
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        if (root == nullptr) return {};
16        // create level one
17        
18        vector<vector<int>> ans={};
19        
20
21        deque<TreeNode*> queue;
22        queue.push_back(root);
23        int level=0;
24        // loop for other levels
25        ans.push_back({root->val});
26        while(!queue.empty()){
27            vector<int> levorder={};
28            int n =queue.size();
29            for(int i=0; i<n;i++){
30                
31                TreeNode* node= queue.front();
32                queue.pop_front();
33                if((node->left)!= nullptr){
34                    queue.push_back(node->left);
35                    levorder.push_back(node->left->val);}
36                if((node->right)!=nullptr){
37                    queue.push_back(node->right);
38                    levorder.push_back(node->right->val);}}
39                if(!levorder.empty()){
40                    ans.push_back(levorder);
41                    level+=1;
42                }
43        }
44        return ans;
45
46
47    }
48};