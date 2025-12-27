class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        costs = [0] * (n + 1)

        for i in range(2, n + 1):
            costs[i] = min(costs[i - 1] + cost[i - 1], costs[i - 2] + cost[i - 2])
        
        return costs[n]
