class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        R, C = len(grid), len(grid[0])
        ans = 0

        def bfs(i, j):
            q = deque([(i, j)])
            grid[i][j] = '0'
            
            while q:
                v = q.popleft()

                for d in directions:
                    x, y = v[0] + d[0], v[1] + d[1]
                    if x >= 0 and y >= 0 and x < R and y < C and grid[x][y] == '1':
                        q.append((x, y))
                        grid[x][y] = '0'
        
        for i in range(R):
            for j in range(C):
                if grid[i][j] == '1':
                    ans += 1
                    bfs(i, j)
        return ans
