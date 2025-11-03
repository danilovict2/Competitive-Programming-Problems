class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            if nums[l] < nums[r]:
                res = self.binary_search(nums[l:r+1], target)
                return res + l if res != -1 else res

            mid = l + (r - l) // 2
            if nums[mid] == target:
                return mid
            if nums[r] > nums[mid]:
                if target <= nums[r] and target >= nums[mid]:
                    l = mid + 1
                else:
                    r = mid - 1
            else:
                if target <= nums[mid] and target >= nums[l]:
                    r = mid - 1
                else:
                    l = mid + 1


        return -1        
    
    def binary_search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                r = mid - 1
            else:
                l = mid + 1
        return -1
