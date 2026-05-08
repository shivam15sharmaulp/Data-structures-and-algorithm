// Last updated: 08/05/2026, 09:32:00
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

    int inorder(TreeNode* root,int & maxval){
        if(!root){
            return 0;
        }

        int leftsum=inorder(root->left, maxval);
        int rightsum=inorder(root->right, maxval);

        int inter=max(max(max(leftsum+ root->val, rightsum + root->val),root->val), leftsum + rightsum + root->val);
        maxval= max(maxval, inter);
        return max(max(leftsum+ root->val, rightsum + root->val),root->val);
    }
    
    int maxPathSum(TreeNode* root) {
        int maxval=INT_MIN;
        int ans= inorder(root, maxval);

        return maxval;
    }
};