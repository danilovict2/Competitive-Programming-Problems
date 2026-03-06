class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:
        adj = defaultdict(list)
        for account in accounts:
            for j in range(1, len(account) - 1):
                adj[account[j]].append(account[j + 1])
                adj[account[j + 1]].append(account[j])
        
        visited = set()
        def dfs(email):
            if email in visited:
                return []
            
            ans = [email]
            visited.add(email)
            for e in adj[email]:
                ans.extend(dfs(e))
            
            return ans

        ans = []
        for account in accounts:
            accs = sorted(dfs(account[1]))
            if len(accs) > 0:
                ans.append([account[0]] + accs)
             
        return ans
