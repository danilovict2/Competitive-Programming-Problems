class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        n, m = len(matrix), len(matrix[0])
        self.prefix = [[0] * (m + 1) for _ in range(n + 1)]

        for i in range(n):
            prefix = 0
            for j in range(m):
                prefix += matrix[i][j]
                above = self.prefix[i][j + 1]
                print(i, j, above)
                self.prefix[i + 1][j + 1] = prefix + above
        
        print(self.prefix)

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        row1, col1, row2, col2 = row1 + 1, col1 + 1, row2 + 1, col2 + 1
        bottomRight = self.prefix[row2][col2]
        above = self.prefix[row1 - 1][col2]
        left = self.prefix[row2][col1 - 1]
        topLeft = self.prefix[row1 - 1][col1 - 1]

        return bottomRight - above - left + topLeft
        
