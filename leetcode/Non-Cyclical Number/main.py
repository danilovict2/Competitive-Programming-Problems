class Solution:
    def isHappy(self, n: int) -> bool:
        vis = set()
        while n and n not in vis:
            vis.add(n)
            n = self.sumOfSquares(n)
            if n == 1:
                return True

        return False
    
    def sumOfSquares(self, n):
        s = 0

        while n:
            dig = n % 10
            dig **= 2
            s += dig
            n //= 10
        
        return s
