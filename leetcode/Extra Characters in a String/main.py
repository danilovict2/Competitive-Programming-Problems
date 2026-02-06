class TrieNode:
    def __init__(self):
        self.children = {}
        self.isWord = False
    
    def addWord(self, word):
        curr = self
        for c in word:
            if c not in curr.children:
                curr.children[c] = TrieNode()
            
            curr = curr.children[c]
        
        curr.isWord = True

class Solution:
    def minExtraChar(self, s: str, dictionary: List[str]) -> int:
        root = TrieNode()
        for word in dictionary:
            root.addWord(word)
        
        memo = { len(s) : 0 }

        def dfs(i):
            if i in memo:
                return memo[i]

            ans = 1 + dfs(i + 1)
            curr = root
            for j in range(i, len(s)):
                if s[j] not in curr.children:
                    break

                curr = curr.children[s[j]] 
                if curr.isWord:
                    ans = min(ans, dfs(j + 1))

            memo[i] = ans
            return ans

        return dfs(0) 
