class Solution:
    def foreignDictionary(self, words: List[str]) -> str:
        adj = {c: set() for w in words for c in w}

        for i in range(len(words) - 1):
            minLen = min(len(words[i]), len(words[i + 1]))
            if len(words[i]) > len(words[i + 1]) and words[i][:minLen] == words[i + 1][:minLen]:
                return ""
            
            for j in range(minLen):
                if words[i][j] != words[i + 1][j]:
                    adj[words[i][j]].add(words[i + 1][j])    
                    break
        
        ans = []
        vis = {}

        def dfs(curr):
            if curr in vis:
                return vis[curr]
            
            vis[curr] = True
            for n in adj[curr]:
                if dfs(n):
                    return True
            
            vis[curr] = False
            ans.append(curr)

        for c in adj:
            if dfs(c):
                return ""
        
        ans.reverse()
        return "".join(ans)
