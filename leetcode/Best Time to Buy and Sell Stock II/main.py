class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        bought_at = prices[0]

        for i in range(1, len(prices)):
            if prices[i] > bought_at:
                profit += prices[i] - bought_at
            
            bought_at = prices[i]
        
        return profit
