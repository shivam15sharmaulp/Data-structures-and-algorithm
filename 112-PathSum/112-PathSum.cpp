// Last updated: 08/05/2026, 09:32:11
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
    int targetsum;

    bool dfs(TreeNode* node, int val, TreeNode* root){
        // if(!node){return;}
        if (val==0 && node!=root && !node->left && !node->right){
            return true;
        }
        bool left= false;
        bool right= false;
        if(node->left){
        left=dfs(node->left, val- node->left->val, root);}
        if (node->right){
        right=dfs(node->right, val- node->right->val, root);}
        
        return left || right;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        targetsum= targetSum;
        if(!root){
            return false;
        }
        if(!root->left && !root->right){
            return (root->val==targetSum);
        }
        // if(!root->left || !root->right){
        //     return false;
        // }
        // else{
        //     return 
        // }
        
        return dfs(root, targetSum- root->val, root);
    }
};