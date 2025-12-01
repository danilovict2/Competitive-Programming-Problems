class Solution:
    def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
        n = len(edges)
        adj = [[] for i in range(n + 1)]
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)

        cycle = set()
        cycleStart = -1
        visited = [False] * (n + 1)

        def dfs(u, parent):
            nonlocal cycleStart
            if visited[u]:
                cycleStart = u
                return True
            
            visited[u] = True
            for v in adj[u]:
                if v == parent:
                    continue
                
                if dfs(v, u):
                    if cycleStart != -1:
                        cycle.add(u)
                    if cycleStart == u:
                        cycleStart = -1
                    return True
                    
            return False

        dfs(1, -1)
        for u, v in reversed(edges):
            if u in cycle and v in cycle:
                return [u, v]
        return []
        
