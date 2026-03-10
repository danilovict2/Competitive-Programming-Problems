class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        n = len(grid)
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        pq = [(grid[0][0], 0, 0)] # dist, i, j
        vis = set([(0, 0)])

        while pq:
            c_dist, i, j = heapq.heappop(pq)
            if i == n - 1 and j == n - 1:
                return c_dist

            for d in directions:
                x, y = i + d[0], j + d[1]
                if x < 0 or y < 0 or x >= n or y >= n or (x, y) in vis:
                    continue
                
                vis.add((x, y))
                heapq.heappush(pq, (max(c_dist, grid[x][y]), x, y))

