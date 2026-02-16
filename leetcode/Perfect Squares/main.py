class Solution:
    def numSquares(self, n: int) -> int:
        dp = [float("inf")] * (n + 1)
        dp[0] = 0

        for num in range(1, n + 1):
            for sq in range(1, num + 1):
                square = sq * sq
                if num - square < 0:
                    break
                    
                dp[num] = min(dp[num - square] + 1, dp[num])
        
        return dp[n]
