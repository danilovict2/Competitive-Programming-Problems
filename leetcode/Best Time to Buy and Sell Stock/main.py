class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, best = 0, 0
        for r in range(1, len(prices)):
            profit = prices[r] - prices[l]
            if profit < 0:
                l = r
            best = max(best, profit)
        return best
