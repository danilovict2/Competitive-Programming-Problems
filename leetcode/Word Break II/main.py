class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
        wordSet = set(wordDict)
        ans = []

        def dfs(i, sentence):
            if i >= len(s):
                ans.append(sentence[:-1])
                return
            
            for j in range(i, len(s)):
                if s[i:j+1] in wordSet:
                    dfs(j + 1, sentence + s[i:j+1] + " ")
            
        dfs(0, "")
        return ans

