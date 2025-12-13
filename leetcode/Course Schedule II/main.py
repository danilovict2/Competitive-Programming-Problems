class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        adj = [[] for i in range(numCourses)]
        for a, b in prerequisites:
            adj[a].append(b)

        ans = []
        vis, cycle = set(), set()
        def topSort(u):
            if u in vis:
                return True
            if u in cycle:
                return False
            
            cycle.add(u)
            for v in adj[u]:
                if not topSort(v):
                    return False
            
            cycle.remove(u)
            vis.add(u)
            ans.append(u)
            return True
        
        for c in range(numCourses):
            if not topSort(c):
                return []

        return ans

