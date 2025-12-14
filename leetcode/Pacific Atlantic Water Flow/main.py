class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        R, C = len(heights), len(heights[0])
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        pac = [[False] * C for _ in range(R)]
        atl = [[False] * C for _ in range(R)]
        
        def bfs(ocean, reachable):
            q = deque(ocean)
            while q:
                i, j = q.popleft()
                reachable[i][j] = True
                for d in directions:
                    x, y = i + d[0], j + d[1]
                    if x >= 0 and y >= 0 and x < R and y < C and not reachable[x][y] and heights[i][j] <= heights[x][y]:
                        q.append((x, y))

        atlantic, pacific = [], []
        for i in range(R):
            pacific.append((i, 0))
            atlantic.append((i, C - 1))
        
        for j in range(C):
            pacific.append((0, j))
            atlantic.append((R - 1, j))

        bfs(pacific, pac)
        bfs(atlantic, atl)



        ans = []
        for i in range(R):
            for j in range(C):
                if pac[i][j] and atl[i][j]:
                    ans.append([i, j])

        return ans
