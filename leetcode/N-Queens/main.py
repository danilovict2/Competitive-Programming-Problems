class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ans = []
        board = [['.'] * n for _ in range(n)]
        cols = set()
        diag1 = set()
        diag2 = set()
        
        def dfs(row):
            if row == n:
                ans.append(["".join(r) for r in board])
                return
            
            for j in range(n):
                if j in cols or (row + j) in diag1 or (row - j) in diag2:
                    continue

                board[row][j] = 'Q'
                cols.add(j)
                diag1.add(row + j)
                diag2.add(row - j)

                dfs(row + 1)

                board[row][j] = '.'
                cols.remove(j)
                diag1.remove(row + j)
                diag2.remove(row - j)
            

        dfs(0)
        return ans
