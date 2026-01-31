class Solution:
    def checkIfPrerequisite(self, numCourses: int, prerequisites: List[List[int]], queries: List[List[int]]) -> List[bool]:
        adj = defaultdict(list)
        for u, v in prerequisites:
            adj[v].append(u)

        preReqs = {}
        def dfs(u):
            if u not in preReqs:
                preReqs[u] = set([u])
                for v in adj[u]:
                    preReqs[u] |= dfs(v)

            return preReqs[u] 
        
        for u in range(numCourses):
            dfs(u)
        
        ans = []
        for u, v in queries:
            ans.append(u in preReqs[v])
        
        return ans
