class Solution:
    def myPow(self, x: float, n: int) -> float:
        def binExp(x, n):
            if n == 0:
                return 1
            
            tmp = binExp(x, n // 2)
            result = tmp * tmp
            if n & 1:
                result *= x
            return result
        
        ans = binExp(x, abs(n))
        return ans if n >= 0 else 1 / ans

