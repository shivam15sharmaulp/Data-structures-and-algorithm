# Last updated: 08/05/2026, 09:30:23
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':

        def solve(node: TreeNode):
            
            if node== None or node==p or node==q:
                return node

            left = solve(node.left)
            right = solve(node.right)

            if left== None:
                return right
            elif right== None:
                return left
            else:
                return node

        return solve(root)


