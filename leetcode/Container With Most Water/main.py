class Solution:
    def maxArea(self, heights: list[int]) -> int:
        i, j = 0, len(heights) - 1
        h = 0
        while i < j:
            h = max(h, (j - i) * min(heights[i], heights[j]))
            if heights[i] < heights[j]:
                i += 1
            else:
                j -= 1
        return h

        
