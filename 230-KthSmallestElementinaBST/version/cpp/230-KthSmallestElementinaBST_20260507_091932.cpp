// Last updated: 07/05/2026, 09:19:32
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14
15    int count=0;
16    void recur(TreeNode* root, int& k, int& ans){
17            if(root==nullptr){
18                return;
19            }
20            recur(root->left,k, ans);
21            k--;
22            if(count==k){
23                ans= root->val;
24            }
25            recur(root->right, k, ans);
26        }
27
28    int kthSmallest(TreeNode* root, int k) {
29        int count=0;
30        int ans=0;
31
32
33        recur(root,k ,ans);
34
35        return ans;
36
37    }
38};