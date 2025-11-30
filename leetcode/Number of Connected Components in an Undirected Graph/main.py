class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        adj = [[] for i in range(n)]
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        
        visited = set()
        def dfs(u):
            visited.add(u)
            for v in adj[u]:
                if v in visited:
                    continue
                dfs(v)
        
        ans = 0
        for u in range(n):
            if u not in visited:
                dfs(u)
                ans += 1
        
        return ans

