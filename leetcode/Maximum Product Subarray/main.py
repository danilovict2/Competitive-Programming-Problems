class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        ans = nums[0]
        curMin, curMax = 1, 1

        for num in nums:
            tmp = curMax * num
            curMax = max(tmp, curMin * num, num)
            curMin = min(tmp, curMin * num, num)
            ans = max(ans, curMax)

        return ans 
