class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        INF = 1e9
        dist = [INF] * (n + 1)
        adj = defaultdict(list)
        for u, v, t in times:
            adj[u].append((v, t))
        
        pq = [(0, k)]
        dist[k] = 0
        while pq:
            d, u = heapq.heappop(pq)
            if d > dist[u]:
                continue
                
            for v, t in adj[u]:
                if dist[v] > (t + dist[u]):
                    dist[v] = t + dist[u]
                    heapq.heappush(pq, (dist[v], v))

        ans = max(dist[1:])
        return ans if ans != INF else -1
