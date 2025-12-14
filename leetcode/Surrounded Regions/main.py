class Solution:
    def solve(self, board: List[List[str]]) -> None:
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        R, C = len(board), len(board[0])

        def bfs():
            q = deque([])
            for i in range(R):
                for j in range(C):
                    if ((i == 0 or j == 0 or i == R - 1 or j == C - 1) and board[i][j] == 'O'):
                        q.append([i, j])
                        board[i][j] = 'S'

            while q:
                pos = q.popleft()
                for d in directions:
                    x, y = pos[0] + d[0], pos[1] + d[1]
                    if x >= 0 and y >= 0 and x < R and y < C and board[x][y] == 'O':
                        board[x][y] = 'S'
                        q.append([x, y])

        bfs()

        for i in range(R):
            for j in range(C):
                if board[i][j] == 'O':
                    board[i][j] = 'X'

                if board[i][j] == 'S':
                    board[i][j] = 'O'

