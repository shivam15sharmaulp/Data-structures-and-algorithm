// Last updated: 08/05/2026, 09:31:37
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

    vector<int> order={};

    vector<int> postorderTraversal(TreeNode* root) {
        if(root== nullptr){
            return {};
        }

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        order.push_back(root->val);

        return order;
    }
};