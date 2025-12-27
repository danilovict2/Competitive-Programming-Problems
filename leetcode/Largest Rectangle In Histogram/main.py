class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        left, right = [-1] * n, [n] * n
        stack = []
        for i in range(n):
            while len(stack) > 0 and heights[i] <= heights[stack[-1]]:
                stack.pop()

            if len(stack) > 0:
                left[i] = stack[-1]

            stack.append(i)

        stack = []
        for i in range(n-1, -1, -1):
            while len(stack) > 0 and heights[i] <= heights[stack[-1]]:
                stack.pop()
            
            if len(stack) > 0:
                right[i] = stack[-1]
            
            stack.append(i)

        ans = 0
        for i in range(n):
            left[i] += 1
            right[i] -= 1
            ans = max(ans, heights[i] * (right[i] - left[i] + 1))
        
        return ans
