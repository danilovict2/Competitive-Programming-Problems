class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        adj = defaultdict(list)
        for src, dst in sorted(tickets)[::-1]:
            adj[src].append(dst)
        
        ans = []
        def dfs(curr):
            while adj[curr]:
                node = adj[curr].pop()
                dfs(node)
            ans.append(curr)
        
        dfs("JFK")
        return ans[::-1]

