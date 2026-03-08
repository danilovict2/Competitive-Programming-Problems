class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        def canSplit(s):
            curr = 0
            sub = 1

            for num in nums:
                curr += num
                if curr > s:
                    sub += 1
                    if sub > k:
                        return False
                    curr = num
            return True


        l, r = max(nums), sum(nums)
        ans = float("inf")

        while l <= r:
            mid = l + (r - l) // 2
            if canSplit(mid):
                ans = min(ans, mid)
                r = mid - 1
            else:
                l = mid + 1
        
        return ans
