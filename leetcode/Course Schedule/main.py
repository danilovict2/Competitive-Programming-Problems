class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        adj = [[] for i in range(numCourses)]
        for u, v in prerequisites:
            adj[u].append(v)

        visited = set()

        def dfs(course):
            if course in visited:
                return False
            if adj[course] == []:
                return True

            visited.add(course)
            for pre in adj[course]:
                if not dfs(pre):
                    return False

            visited.remove(course)
            adj[course] = []
            return True 
        
        for course in range(numCourses):
            if not dfs(course):
                return False
        
        return True
