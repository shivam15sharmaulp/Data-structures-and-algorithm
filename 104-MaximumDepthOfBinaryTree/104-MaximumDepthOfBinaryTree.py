# Last updated: 08/05/2026, 09:32:18
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        def recur(node, leng):
            if node==None:
                return leng
            leng+=1
            r=recur(node.right,leng)
            l=recur(node.left,leng)
            
            print("r:",r," l",l)
            return r if r>l else l

        return recur(root,0)