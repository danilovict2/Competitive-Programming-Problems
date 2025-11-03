class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)
        ans = r
        while l <= r:
            mid = l + (r - l) // 2
            t = 0
            for pile in piles:
                t += math.ceil(pile / mid)
            if t <= h:
                ans = mid
                r = mid - 1
            else:
                l = mid + 1
        return ans
        
