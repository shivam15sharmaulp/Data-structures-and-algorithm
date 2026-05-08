// Last updated: 08/05/2026, 09:29:15
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

    int dfs(TreeNode* node, int& maxi){
        if(!node){
            return 0;
        }
        
        int left=dfs(node->left, maxi);
        int right= dfs(node->right, maxi);

        maxi= max(maxi, left+right);
        
        
        return max(left, right)+1;



    }

    int diameterOfBinaryTree(TreeNode* root) {

        int maxi=0;
       
        dfs(root, maxi);

        return maxi;
        
    }
};