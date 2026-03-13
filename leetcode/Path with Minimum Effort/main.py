class Solution:
    def minimumEffortPath(self, heights: List[List[int]]) -> int:
        r, c = len(heights), len(heights[0])
        visited = set()
        pq = [(0, 0, 0)]
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        while pq:
            d, i, j = heapq.heappop(pq)
            
            if (i, j) in visited:
                continue
            
            visited.add((i, j))

            if i == r - 1 and j == c - 1:
                return d
            
            for [d1, d2] in directions:
                x, y = i + d1, j + d2
                if x < 0 or y < 0 or x >= r or y >= c or (x, y) in visited:
                    continue
                
                diff = max(d, abs(heights[i][j] - heights[x][y]))
                heapq.heappush(pq, (diff, x, y))
        
        return -1

