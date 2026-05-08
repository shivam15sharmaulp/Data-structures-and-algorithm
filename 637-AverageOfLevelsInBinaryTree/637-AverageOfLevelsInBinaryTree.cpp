// Last updated: 08/05/2026, 09:29:06
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans{};        
        if(!root){
            return ans;
        }
        TreeNode* curr= root;
        std::queue<TreeNode*> q;
        q.push(root);
        double n=1;
        std::queue<TreeNode*> tmp;
        while(!q.empty()){
            double sadd=0;
            n= q.size();
            TreeNode* dummy= q.front();;
            std::queue<TreeNode*> tmp;
            while(!q.empty()){
                sadd+=dummy->val;
                if(dummy->left)
                tmp.push(dummy->left);
                if(dummy->right)
                tmp.push(dummy->right);
                q.pop();
                dummy=q.front();
            }
            q=tmp;
            ans.push_back(sadd/n);
        }
        return ans;
    }
};