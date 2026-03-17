class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        adj = defaultdict(list)
        for [fr, to, price] in flights:
            adj[fr].append((to, price))
        
        dist = [[float("inf")] * (k + 2) for _ in range(n)]
        dist[src][0] = 0
        pq = [(0, src, 0)]

        while pq:
            cost, stop, stops = heapq.heappop(pq)
            if stop == dst:
                return cost
            if stops > k or dist[stop][stops] < cost:
                continue 
            
            for (nxt, price) in adj[stop]:
                nextCost = cost + price
                if dist[nxt][stops + 1] > nextCost:
                    dist[nxt][stops + 1] = nextCost
                    heapq.heappush(pq, (nextCost, nxt, stops + 1))

        return -1
        
