class Solution:
    def lastStoneWeightII(self, stones: List[int]) -> int:
        stoneSum = sum(stones)
        target = (stoneSum + 1) // 2
        memo = {}

        def dfs(i, curr):
            if curr >= target or i == len(stones):
                return abs(curr - (stoneSum - curr))

            if (i, curr) in memo:
                return memo[(i, curr)]

            memo[(i, curr)] = min(dfs(i + 1, curr + stones[i]), dfs(i + 1, curr))
            return memo[(i, curr)]
        
        return dfs(0, 0)
