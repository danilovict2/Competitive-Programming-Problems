class Solution:
    def trap(self, height: list[int]) -> int:
        n = len(height)
        prefix = [0] * n
        suffix = [0] * n
        for i in range(1, n):
            prefix[i] = max(prefix[i - 1], height[i - 1])

        for i in range(n - 2, -1, -1):
            suffix[i] = max(suffix[i + 1], height[i + 1])

        s = 0
        for i in range(n):
            s += max(0, min(prefix[i], suffix[i]) - height[i]) 

        return s

