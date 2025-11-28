class Solution:
    def islandsAndTreasure(self, grid: List[List[int]]) -> None:
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        R, C = len(grid), len(grid[0])

        def dfs(i, j, dist):
            if i < 0 or j < 0 or i >= R or j >= C or grid[i][j] < dist:
                return
            
            grid[i][j] = dist
            for d in directions:
                dfs(i + d[0], j + d[1], dist + 1)


        for i in range(R):
            for j in range(C):
                if grid[i][j] == 0:
                    dfs(i, j, 0)

