class Solution:
    def minEnd(self, n: int, x: int) -> int:
        ans = x
        i_n = 1
        i_x = 1

        while i_n <= n - 1:
            if x & i_x == 0:
                if i_n & (n - 1):
                    ans |= i_x
                i_n = i_n << 1
            i_x = i_x << 1
        
        return ans
