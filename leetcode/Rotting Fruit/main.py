class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = deque()
        R, C = len(grid), len(grid[0])
        fresh = 0

        def addCell(i, j):
            nonlocal fresh
            if i >= 0 and j >= 0 and i < R and j < C and grid[i][j] == 1:
                q.append([i, j])
                grid[i][j] = 2
                fresh -= 1

        for i in range(R):
            for j in range(C):
                if grid[i][j] == 2:
                    q.append([i, j])
                elif grid[i][j] == 1:
                    fresh += 1

        ans = 0
        while fresh > 0 and q:
            for i in range(len(q)):
                r, c = q.popleft()
                grid[r][c] = 2
                addCell(r - 1, c)
                addCell(r + 1, c)
                addCell(r, c - 1)
                addCell(r, c + 1)
            ans += 1
        
        return ans if fresh == 0 else -1

