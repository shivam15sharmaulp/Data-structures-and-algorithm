# Last updated: 08/05/2026, 09:29:25
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root is None:
            return None

        if root.val<key:
            root.right= self.deleteNode(root.right, key)
        elif root.val>key:
            root.left= self.deleteNode(root.left, key)
        else:

            if root.right is None:
                return root.left
            elif root.left is None:
                return root.right
            else:

            # Two children. Inorder successor

                successor= root.right

                while successor.left:
                    successor= successor.left

                root.val= successor.val

                root.right= self.deleteNode(root.right, successor.val)

        return root
        