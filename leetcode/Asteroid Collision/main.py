class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []
        for a in asteroids:
            if a > 0:
                stack.append(a)
                continue
            
            while stack and stack[-1] > 0 and abs(a) > stack[-1]:
                stack.pop()
            
            if stack and abs(a) == stack[-1]:
                stack.pop()
                continue
            
            if len(stack) == 0 or stack[-1] * a > 0:
                stack.append(a)

        return stack
