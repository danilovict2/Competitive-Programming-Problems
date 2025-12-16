class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        ans = [0] * len(temperatures)
        for i, temperature in enumerate(temperatures):
            while len(stack) > 0 and stack[-1][0] < temperature:
                ans[stack[-1][1]] = i - stack[-1][1]
                stack.pop()
            
            stack.append([temperature, i])
        
        return ans
