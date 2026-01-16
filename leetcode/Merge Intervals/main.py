class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda a: a[0])
        ans = [intervals[0]]

        for s, e in intervals:
            lastEnd = ans[-1][1]
            
            if s <= lastEnd:
                ans[-1][1] = max(e, lastEnd)
            else:
                ans.append([s, e])
        
        return ans
