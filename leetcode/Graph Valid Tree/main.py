class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        if len(edges) > n - 1:
            return False

        adj = [[] for i in range(n)]
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        
        visited = set()
        def dfs(u):
            if u in visited:
                return False
            
            visited.add(u)
            
            for v in adj[u]:
                if v in visited:
                    continue

                if not dfs(v):
                    return False
            
            return True

        return dfs(0) and len(visited) == n
