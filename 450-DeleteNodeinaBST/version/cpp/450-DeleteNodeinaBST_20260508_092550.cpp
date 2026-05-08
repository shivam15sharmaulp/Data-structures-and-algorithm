// Last updated: 08/05/2026, 09:25:50
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
14
15    vector<int> order={};
16
17    vector<int> postorderTraversal(TreeNode* root) {
18        if(root== nullptr){
19            return {};
20        }
21
22        postorderTraversal(root->left);
23        postorderTraversal(root->right);
24        order.push_back(root->val);
25
26        return order;
27    }
28};