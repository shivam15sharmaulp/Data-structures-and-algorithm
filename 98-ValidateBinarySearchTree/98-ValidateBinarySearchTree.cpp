// Last updated: 08/05/2026, 09:32:25
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
 #include <cmath>
class Solution {
public:
    bool nested(TreeNode* root, double left, double right){
            if(!root){
                return true;
            }
            if(!(left<root->val && root->val<right)){
                return false;
            }
            return nested(root->left, left, root->val) && nested(root->right, root->val, right);

        }
    
    bool isValidBST(TreeNode* root) {
        double left = -INFINITY;
        double right= INFINITY;

        
        return nested(root, left, right);
        
    }
};