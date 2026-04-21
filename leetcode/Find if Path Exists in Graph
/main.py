class DSU:
    def __init__(self, n):
        self.parent = list(range(n))
        self.size = [1] * n

    def find(self, node):
        root = node
        while root != self.parent[root]:
            root = self.parent[root]
        
        while node != root:
            next = self.parent[node]
            self.parent[node] = root
            node = next
        return root
    
    def union(self, u, v):
        pu = self.find(u)
        pv = self.find(v)

        if pu == pv:
            return False
        
        if self.size[pu] >= self.size[pv]:
            self.size[pu] += self.size[pv]
            self.parent[pv] = pu
        else:
            self.size[pv] += self.size[pu]
            self.parent[pu] = pv
        
        return True

class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        dsu = DSU(n)
        for u, v in edges:
            dsu.union(u, v)
        

        return dsu.find(source) == dsu.find(destination)
