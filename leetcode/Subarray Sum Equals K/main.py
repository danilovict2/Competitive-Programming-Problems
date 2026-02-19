class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        curr = ans = 0
        pfx = { 0: 1 }

        for num in nums:
            curr += num
            ans += pfx.get(curr - k, 0)
            pfx[curr] = 1 + pfx.get(curr, 0)
        
        return ans 

