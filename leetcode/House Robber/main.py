class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)

        def dp(i, memo = {}):
            if i >= n:
                return 0
            
            if i in memo:
                return memo[i]

            memo[i] = max(dp(i + 1), dp(i + 2) + nums[i])
            return memo[i]

        return dp(0)

