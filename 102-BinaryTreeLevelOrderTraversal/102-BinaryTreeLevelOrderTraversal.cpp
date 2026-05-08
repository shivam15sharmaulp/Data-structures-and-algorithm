// Last updated: 08/05/2026, 09:32:19
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans{};
        vector<int> level;
        if(!root){
            return ans;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            level={};
            int n = q.size();

            for(int i=1; i<=n; i++){
                level.push_back(q.front()->val);
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(level);
        }
    return ans;
    }
};