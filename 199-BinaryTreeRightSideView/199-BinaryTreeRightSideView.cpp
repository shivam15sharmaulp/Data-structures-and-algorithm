// Last updated: 08/05/2026, 09:31:02
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
 #include<deque>
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        deque<TreeNode*> q;
        q.push_back(root);
        TreeNode* rightside;
        int qlen;
        vector<int> ans;
        while(!q.empty()){
            rightside=nullptr;
            qlen= q.size();
            for(int i=0; i<qlen;i++){
                TreeNode* node=q.front();
                q.pop_front();
                if(node){
                    
                if (node->left) q.push_back(node->left);
                if (node->right) q.push_back(node->right);
                    rightside= node;}
            }
            if(rightside){
                ans.push_back(rightside->val);
            }
        }

        return ans;


    }
};