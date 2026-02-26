class Solution:
    def stoneGameII(self, piles: List[int]) -> int:
        n = len(piles)
        memo = {}

        def dfs(l, m, alice):
            if l >= n:
                return 0
            if (l, m, alice) in memo:
                return memo[(l, m, alice)]
            
            ans = 0 if alice else float("inf")
            curr = 0
            for x in range(1, 2 * m + 1):
                if (l + x) > n:
                    break
                
                curr += piles[l + x - 1]
                if alice:
                    ans = max(ans, curr + dfs(l + x, max(m, x), not alice))
                else:
                    ans = min(ans, dfs(l + x, max(m, x), not alice))

            memo[(l, m, alice)] = ans
            return ans

        
        return dfs(0, 1, True)
