class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        n, m = len(word1), len(word2)
        memo = {}

        def dfs(i, j):
            if i == n:
                return m - j
            if j == m:
                return n - i
            if (i, j) in memo:
                return memo[(i, j)]
            if word1[i] == word2[j]:
                return dfs(i + 1, j + 1)
            
            ans = min(dfs(i + 1, j), dfs(i, j + 1), dfs(i + 1, j + 1))
            memo[(i, j)] = ans + 1 
            return ans + 1

        return dfs(0, 0)
