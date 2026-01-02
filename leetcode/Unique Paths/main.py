class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        prevRow = [1] * n
        for _ in range(1, m):
            newRow = [1] * n
            for j in range(1, n):
                newRow[j] = newRow[j - 1] + prevRow[j]
            prevRow = newRow

        return prevRow[n-1]
