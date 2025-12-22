class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        R, C = len(board), len(board[0])
        directions = [[0, 1], [0, -1], [1, 0], [-1, 0]]

        def dfs(i, x, y):
            if i >= len(word):
                return True

            if x < 0 or y < 0 or x >= R or y >= C or board[x][y] != word[i] or board[x][y] == '#':
                return False

            board[x][y] = '#'
            for d in directions:
                dx, dy = x + d[0], y + d[1]
                if dfs(i + 1, dx, dy):
                    return True
                
            board[x][y] = word[i] 
            return False

        for i in range(R):
            for j in range(C):
                if dfs(0, i, j):
                    return True
        
        return False
