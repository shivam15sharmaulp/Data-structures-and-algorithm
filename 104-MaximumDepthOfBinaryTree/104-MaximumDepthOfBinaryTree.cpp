// Last updated: 08/05/2026, 09:32:22
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int dfs( TreeNode* node){
        if(!node){
            return 0;
        }

         int val=max(dfs(node->left), dfs(node->right));

         return val+1;
    }

    int maxDepth(TreeNode* root) {
        return dfs(root);
        
    }
};