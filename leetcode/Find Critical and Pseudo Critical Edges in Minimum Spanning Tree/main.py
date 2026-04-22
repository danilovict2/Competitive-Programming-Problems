class DSU:
    def __init__(self, n):
        self.parent = list(range(n))
        self.size = [1] * n

    def find(self, node):
        root = node
        while root != self.parent[root]:
            root = self.parent[root]
        return root
    
    def union(self, u, v):
        p1 = self.find(u)
        p2 = self.find(v)
        if p1 == p2:
            return False
        
        if self.size[p1] > self.size[p2]:
            self.parent[p2] = p1
            self.size[p1] += self.size[p2]
        else:
            self.parent[p1] = p2
            self.size[p2] += self.size[p1]
        
        return True

class Solution:
    def findCriticalAndPseudoCriticalEdges(self, n: int, edges: List[List[int]]) -> List[List[int]]:
        for i, e in enumerate(edges):
            e.append(i)

        edges.sort(key=lambda e:e[2])

        uf = DSU(n)
        weight = 0
        for u, v, w, i in edges:
            if uf.union(u, v):
                weight += w
        
        critical = []
        pseudo = []
        for x, y, ww, i in edges:
            wh = 0
            uf = DSU(n)
            for u, v, w, j in edges:
                if i != j and uf.union(u, v):
                    wh += w
            
            if max(uf.size) != n or wh != weight:
                critical.append(i)
                continue

            wh = ww
            uf = DSU(n)
            uf.union(x, y)
            for u, v, w, j in edges:
                if i != j and uf.union(u, v):
                    wh += w
            
            if wh == weight:
                pseudo.append(i)


        return [critical, pseudo]

