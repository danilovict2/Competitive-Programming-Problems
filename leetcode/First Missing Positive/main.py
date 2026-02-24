class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n, INF = len(nums), -1e9
        i = -1

        while (i + 1) < n:
            i += 1
            curr = nums[i] - 1

            while curr >= 0 and curr < n:
                tmp = nums[curr] - 1
                nums[curr] = INF
                curr = tmp
        
        for i in range(n):
            if nums[i] != INF:
                return i + 1
        
        return n + 1
