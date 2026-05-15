// Last updated: 15/05/2026, 14:14:36
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
14    bool backtrack(TreeNode* root, int targetSum, int sum){
15        if(root==nullptr){
16            return false;
17        }
18        sum+=root->val;
19        if(root->left ==nullptr && root->right== nullptr){
20            if(sum==targetSum){
21                return true;
22            }}
23           return backtrack(root->left, targetSum, sum) || backtrack(root->right, targetSum, sum);
24            
25    }
26    
27    bool hasPathSum(TreeNode* root, int targetSum) {
28        return backtrack(root, targetSum, 0);
29    }
30};