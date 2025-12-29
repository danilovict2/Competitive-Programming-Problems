class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]

        def dp(i, first, memo):
            if i >= n or (first and i == n - 1):
                return 0
            
            if i in memo:
                return memo[i]

            memo[i] = max(dp(i + 1, first, memo), nums[i] + dp(i + 2, first, memo)) 
            return memo[i]

        return max(dp(0, True, {}), dp(1, False, {}))
