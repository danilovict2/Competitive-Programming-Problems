class Solution:
    def totalNQueens(self, n: int) -> int:
        ans = 0
        cols = set()
        diag1 = set()
        diag2 = set()

        def dfs(row):
            nonlocal ans
            if row == n:
                ans += 1
                return
            
            for j in range(n):
                if j in cols or (row + j) in diag1 or (row - j) in diag2:
                    continue
                
                cols.add(j)
                diag1.add(row + j)
                diag2.add(row - j)
                dfs(row + 1)

                cols.remove(j)
                diag1.remove(row + j)
                diag2.remove(row - j)
            
        dfs(0)
        return ans
