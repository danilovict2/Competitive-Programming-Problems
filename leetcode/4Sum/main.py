class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        ans = []
        nums.sort()

        for a in range(len(nums)):
            if a > 0 and nums[a] == nums[a - 1]:
                continue

            for b in range(a + 1, len(nums)):
                if b > a + 1 and nums[b] == nums[b - 1]:
                    continue

                c, d = b + 1, len(nums) - 1
                while c < d:
                    s = nums[a] + nums[b] + nums[c] + nums[d]
                    if s == target:
                        ans.append([nums[a], nums[b], nums[c], nums[d]])
                        d -= 1
                        c += 1

                        while c < d and nums[c - 1] == nums[c]:
                            c += 1
                    elif s > target:
                        d -= 1
                    else:
                        c += 1
        
        return ans
