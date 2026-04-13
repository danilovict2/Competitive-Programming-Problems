class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        nums = [1] + nums + [1]
        memo = {}

        def dfs(l, r):
            if l + 1 >= r:
                return 0
            if (l, r) in memo:
                return memo[(l, r)]
            
            ans = float("-inf")
            for i in range(l + 1, r):
                curr = nums[l] * nums[i] * nums[r]
                ans = max(ans, curr + dfs(l, i) + dfs(i, r))
            
            memo[(l, r)] = ans
            return ans
        
        return dfs(0, len(nums) - 1)
    
        
