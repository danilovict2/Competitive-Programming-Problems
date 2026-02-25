class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        memo = {}

        def dfs(l, r):
            if l > r:
                return 0
            if (l, r) in memo:
                return memo[(l, r)]
            
            alice = (r - l) % 2 == 0
            left = piles[l] if alice else 0
            right = piles[r] if alice else 0

            memo[(l, r)] = max(left + dfs(l + 1, r), right + dfs(l, r - 1))
            return memo[(l, r)]
        
        total = sum(piles)
        alice_score = dfs(0, len(piles) - 1)
        return alice_score > total - alice_score

