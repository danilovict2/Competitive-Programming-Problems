class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        memo = {}

        def matches(i, j):
            if j >= len(p):
                return i >= len(s)
            
            if (i, j) in memo:
                return memo[(i, j)]

            match = i < len(s) and (s[i] == p[j] or p[j] == '.')

            if (j + 1) < len(p) and p[j + 1] == '*':
                memo[(i, j)] = (matches(i, j + 2) or (match and matches(i + 1, j)))
                return memo[(i, j)]
            
            if match:
                memo[(i, j)] = matches(i + 1, j + 1)
                return memo[(i, j)]
            
            memo[(i, j)] = False
            return False

        return matches(0, 0)
