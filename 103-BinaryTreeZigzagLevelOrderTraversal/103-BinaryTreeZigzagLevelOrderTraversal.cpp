// Last updated: 08/05/2026, 09:32:17
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans{};
        if(!root){
            return ans;
        }
        vector<int> list{};
        std::deque<TreeNode*> dq{};
        dq.push_back(root);
        int n=1;
        bool l2r=true;
        while(!dq.empty()){
            n= dq.size();
            list={};
            for(int i=1; i<=n;i++){
                
                if(l2r){
                list.push_back(dq.front()->val);
                if(dq.front()->left)
                dq.push_back(dq.front()->left);
                if(dq.front()->right)
                dq.push_back(dq.front()->right);
                dq.pop_front();}
                else{
                list.push_back(dq.back()->val);
                if(dq.back()->right)
                dq.push_front(dq.back()->right);
                if(dq.back()->left)
                dq.push_front(dq.back()->left);
                dq.pop_back();
                }
                
            }
            ans.push_back(list);
            l2r=!l2r;
        }
        return ans;
    }
};