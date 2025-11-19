# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        ans, cnt = None, 0

        def dfs(curr):
            nonlocal cnt, ans
            if not curr:
                return

            left = dfs(curr.left)
            cnt += 1
            ans = curr.val if cnt == k else ans
            right = dfs(curr.right)
        
        dfs(root)
        return ans
             
