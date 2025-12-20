class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        ans = []
        def dfs(i, total = 0, subset = []):
            if total == target:
                ans.append(subset.copy())
            if total >= target or i >= len(nums):
                return

            subset.append(nums[i])
            dfs(i, total + nums[i], subset)
            subset.pop()
            dfs(i + 1, total, subset)
        
        dfs(0)
        return list(ans)
