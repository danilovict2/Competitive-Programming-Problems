class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums = sorted(nums)
        ret = []
        for k in range(len(nums)):
            if nums[k] > 0:
                break 

            if k > 0 and nums[k] == nums[k - 1]:
                continue

            i, j = k + 1, len(nums) - 1
            while i < j:
                s = nums[i] + nums[j] + nums[k]
                if s == 0:
                    ret.append([nums[i], nums[j], nums[k]])
                    i += 1
                    j -= 1
                    while i < j and nums[i] == nums[i - 1]:
                        i += 1
                elif s > 0:
                    j -= 1
                else:
                    i += 1
        return ret
                


