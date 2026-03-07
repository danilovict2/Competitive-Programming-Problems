class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])
        def bfs(start):
            q = deque([start])
            visited = set([start])
            directions = [[0, 1], [0, -1], [1, 0], [-1, 0]]
            ans = 0
            while q:
                i, j = q.popleft()
                for d in directions:
                    x, y = i + d[0], j + d[1]
                    if (x, y) in visited:
                        continue
                
                    if x < 0 or y < 0 or x >= n or y >= m or grid[x][y] == 0:
                        ans += 1
                        continue
                
                    q.append((x, y))
                    visited.add((x, y))
   
            return ans

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    return bfs((i, j))
        
        return 0
