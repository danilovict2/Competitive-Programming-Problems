# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        ans = 0
        def dfs(curr, max_val):
            nonlocal ans
            if not curr:
                return

            if curr.val >= max_val:
                ans += 1

            dfs(curr.left, max(curr.val, max_val)) 
            dfs(curr.right, max(curr.val, max_val)) 
        
        dfs(root, root.val)
        return ans
