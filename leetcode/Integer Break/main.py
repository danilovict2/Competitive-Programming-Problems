class Solution:
    def integerBreak(self, n: int) -> int:
        dp = [0] * (n + 1)
        dp[1] = 1

        for curr in range(2, n + 1):
            dp[curr] = 0 if curr == n else curr
            for i in range(1, curr):
                dp[curr] = max(dp[curr], i * dp[curr - i])
        
        return dp[n]
