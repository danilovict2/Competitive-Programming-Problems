class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        ans = []
        def dfs(i, comb):
            if len(comb) == k:
                ans.append(comb)
                return

            for j in range(i, n + 1):
                dfs(j + 1, comb + [j]) 
        
        dfs(1, [])
        return ans
