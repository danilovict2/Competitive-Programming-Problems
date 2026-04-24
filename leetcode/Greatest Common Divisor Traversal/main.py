class DSU:
    def __init__(self, n):
        self.parent = list(range(n))
        self.size = [1] * n
    
    def find(self, node):
        while self.parent[node] != node:
            node = self.parent[node]
        
        return node

    def union(self, u, v):
        pu, pv = self.find(u), self.find(v)
        if pu == pv:
            return False
        
        if self.size[pu] > self.size[pv]:
            self.parent[pv] = pu
            self.size[pu] += self.size[pv]
        else:
            self.parent[pu] = pv
            self.size[pv] += self.size[pu]

        return True 

class Solution:
    def canTraverseAllPairs(self, nums: List[int]) -> bool:
        uf = DSU(len(nums))
        factor_index = {}

        for i, n in enumerate(nums):
            f = 2
            while f * f <= n:
                if n % f == 0:
                    if f in factor_index:
                        uf.union(i, factor_index[f])
                    else:
                        factor_index[f] = i
                    
                    while n % f == 0:
                        n //= f
                f += 1
            
            if n > 1:
                if n in factor_index:
                    uf.union(i, factor_index[n])
                else:
                    factor_index[n] = i
        
        return max(uf.size) == len(nums)

