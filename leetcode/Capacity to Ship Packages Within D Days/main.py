class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        ans = r + 1

        while l <= r:
            w = l + (r - l) // 2

            d, cap = 1, w
            for weight in weights:
                if cap - weight < 0:
                    d += 1
                    if d > days:
                        break
                    cap = w
                cap -= weight
            
            if d <= days:
                ans = min(ans, w)
                r = w - 1
            else:
                l = w + 1
        
        return ans
