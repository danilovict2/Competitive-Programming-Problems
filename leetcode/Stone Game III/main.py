class Solution:
    def stoneGameIII(self, stoneValue: List[int]) -> str:
        n = len(stoneValue)
        memo = {}

        def dfs(i):
            if i >= n:
                return 0
            if i in memo:
                return memo[i]

            total = 0
            ans = float("-inf")
            for j in range(i, min(i + 3, n)):
                total += stoneValue[j]
                ans = max(ans, total - dfs(j + 1))
            
            memo[i] = ans
            return ans
        
        res = dfs(0)
        if res == 0:
            return "Tie"
        
        return "Alice" if res > 0 else "Bob"

