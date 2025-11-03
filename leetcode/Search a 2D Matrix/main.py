class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        M, N = len(matrix), len(matrix[0])

        l, r = 0, M - 1
        while l <= r:
            mid = l + (r - l) // 2
            if target < matrix[mid][0]:
                r = mid - 1
            elif target > matrix[mid][-1]:
                l = mid + 1
            else:
                break
        
        if l > r:
            return False
        
        row = l + (r - l) // 2
        l, r = 0, N - 1
        while l <= r:
            mid = l + (r - l) // 2
            if target == matrix[row][mid]:
                return True
            elif target > matrix[row][mid]:
                l = mid + 1
            else:
                r = mid - 1
        return False
