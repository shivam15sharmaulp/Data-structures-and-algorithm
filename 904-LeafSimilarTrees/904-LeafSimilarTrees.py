# Last updated: 08/05/2026, 09:28:44
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        def recur(root):
            if not root:
                return []
            elif not root.left and not root.right:
                return [root.val]
            else:
                return recur(root.right) + recur(root.left)

        return recur(root1)==recur(root2) 
