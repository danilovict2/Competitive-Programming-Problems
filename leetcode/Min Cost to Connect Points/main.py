class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        adj = defaultdict(list)

        for i in range(len(points)):
            for j in range(i + 1, len(points)):
                dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])
                adj[i].append((dist, j))
                adj[j].append((dist, i))
        
        vis = set()
        pq = [(0, 0)]
        ans = 0
        while pq:
            cost, i = heapq.heappop(pq)
            if i in vis:
                continue

            ans += cost
            vis.add(i)
            for c, nei in adj[i]:
                if nei not in vis:
                    heapq.heappush(pq, (c, nei))
        
        return ans

