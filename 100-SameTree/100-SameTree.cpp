// Last updated: 08/05/2026, 09:32:24
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

    int bfs( TreeNode* lnode, TreeNode* rnode){
        if(!lnode && !rnode){
            return true;
        }
        else if(!lnode || !rnode){
            return false;
        }
        else{
            if(lnode->val==rnode->val){
                return bfs(lnode->left, rnode->left) && bfs(lnode->right, rnode->right);
            }
        }

        return false;

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return bfs(p,q);
    }
};