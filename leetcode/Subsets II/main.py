class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        subsets = []
        nums.sort()

        def dfs(i, subset):
            if i == len(nums):
                subsets.append(subset)
                return

            dfs(i + 1, subset + [nums[i]])
            
            while i + 1 < len(nums) and nums[i] == nums[i + 1]:
                i += 1

            dfs(i + 1, subset)

        dfs(0, [])
        return subsets
