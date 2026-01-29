class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        ans = len(nums) + 1
        l = curr = 0
        for r in range(len(nums)):
            curr += nums[r]
            while l <= r and curr >= target:
                curr -= nums[l]
                ans = min(ans, r - l + 1)
                l += 1

        return 0 if ans == len(nums) + 1 else ans 

         
