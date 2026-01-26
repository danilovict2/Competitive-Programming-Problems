# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rob(self, root: Optional[TreeNode]) -> int:
        memo = {}
        def dfs(curr):
            if not curr:
                return 0
            if curr in memo:
                return memo[curr]

            ans = curr.val
            if curr.left:
                ans += dfs(curr.left.left) + dfs(curr.left.right)
            if curr.right:
                ans += dfs(curr.right.left) + dfs(curr.right.right)
            
            ans = max(ans, dfs(curr.left) + dfs(curr.right))
            memo[curr] = ans
            return ans

        return dfs(root)
