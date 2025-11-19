# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        ans = root.val

        def dfs(curr):
            nonlocal ans
            if not curr:
                return 0

            left = max(dfs(curr.left), 0)
            right = max(dfs(curr.right), 0)

            ans = max(ans, curr.val + left + right)
            return curr.val + max(left, right)


        dfs(root)
        return ans
        
