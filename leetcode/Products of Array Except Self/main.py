class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        n = len(nums)
        ret = [1] * n
        for i in range(1, n):
            ret[i] = ret[i - 1] * nums[i - 1]

        postfix = 1
        for i in range(n - 1, -1, -1):
            ret[i] *= postfix
            postfix *= nums[i]

        return ret
