class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        def dfs(op, close, string):
            if op == close == n:
                ans.append(string)
            
            if op < n:
                dfs(op + 1, close, string + "(")
            if close < op:
                dfs(op, close + 1, string + ")")
        
        dfs(0, 0, "")
        return ans
