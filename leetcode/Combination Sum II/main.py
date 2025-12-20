class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        candidates.sort()

        def dfs(i, total = 0, subset = []):
            if total == target:
                ans.append(subset)
            
            if total >= target or i >= len(candidates):
                return
            
            dfs(i + 1, total + candidates[i], subset + [candidates[i]])
            while i + 1 < len(candidates) and candidates[i] == candidates[i + 1]:
                i += 1
            
            dfs(i + 1, total, subset)
            
        dfs(0)
        return ans

