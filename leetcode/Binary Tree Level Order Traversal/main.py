# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = defaultdict(list)
        def dfs(curr, depth = 0):
            nonlocal ans
            if not curr:
                return
            
            ans[depth].append(curr.val)
            dfs(curr.left, depth + 1)
            dfs(curr.right, depth + 1)
        
        dfs(root)
        return list(ans.values())

