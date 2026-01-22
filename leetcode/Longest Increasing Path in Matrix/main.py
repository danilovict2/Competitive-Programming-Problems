class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        n, m = len(matrix), len(matrix[0])
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        memo = {}

        def dfs(i, j):
            if (i, j) in memo:
                return memo[(i, j)]
            
            ans = 1
            for d in directions:
                x, y = i + d[0], j + d[1]
                if x < 0 or y < 0 or x >= n or y >= m or matrix[x][y] <= matrix[i][j]:
                    continue
                
                ans = max(ans, 1 + dfs(x, y))
            
            memo[(i, j)] = ans
            return ans
        
        ans = 1
        for i in range(n):
            for j in range(m):
                ans = max(ans, dfs(i, j))
        
        return ans
