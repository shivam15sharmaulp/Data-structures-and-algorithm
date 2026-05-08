// Last updated: 08/05/2026, 15:29:12
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
14    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
15
16        if(preorder.empty() || inorder.empty()){
17            return {};
18        }
19
20        int node= preorder[0];
21
22        auto it= find(inorder.begin(), inorder.end(), node);
23        // if(it != inorder.end()){
24            
25        // }
26        int index=it - inorder.begin();
27        TreeNode* root= new TreeNode(node);
28        vector<int> preleft(preorder.begin()+1, preorder.begin()+index+1);
29        vector<int> inleft(inorder.begin(), inorder.begin()+index);
30        vector<int> preright(preorder.begin()+index+1, preorder.end());
31        vector<int> inright(inorder.begin()+ index+1, inorder.end());
32        root->left=buildTree(preleft,inleft );
33
34        root->right= buildTree(preright,inright );
35
36
37    return root;
38
39
40
41
42
43        
44    }
45};