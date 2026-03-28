class Solution:
    def buildMatrix(self, k: int, rowConditions: List[List[int]], colConditions: List[List[int]]) -> List[List[int]]:
        def dfs(curr, adj, vis, path, ans):
            if curr in path:
                return False
            if curr in vis:
                return True
            
            vis.add(curr)
            path.add(curr)

            for nei in adj[curr]:
                if not dfs(nei, adj, vis, path, ans):
                    return False
            
            ans.append(curr)
            path.remove(curr)
            return True
        

        def topSort(cond):
            adj = defaultdict(list)
            for x, y in cond:
                adj[x].append(y)
            
            vis = set()
            ans = []
            for i in range(1, k + 1):
                if not dfs(i, adj, vis, set(), ans):
                    return []
            
            return ans[::-1]

        rowSort = topSort(rowConditions)
        if len(rowSort) == 0:
            return []
        
        colSort = topSort(colConditions)
        if len(colSort) == 0:
            return []
        
        ans = [[0] * k for _ in range(k)]
        for i in range(len(rowSort)):
            for j in range(len(colSort)):
                if rowSort[i] == colSort[j]:
                    ans[i][j] = rowSort[i]
                    break

        return ans

