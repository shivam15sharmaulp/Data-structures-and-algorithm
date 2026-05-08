# Last updated: 08/05/2026, 09:28:49
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:

        def insert(root):
            if root is None:
                return TreeNode(val)

            if val>root.val:
                root.right= insert(root.right)
            elif val<root.val:
                root.left= insert(root.left)
            
            return root
        
        return insert(root)