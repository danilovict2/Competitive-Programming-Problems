"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def minMeetingRooms(self, intervals: List[Interval]) -> int:
        time = []
        for interval in intervals:
            time.append((interval.start, 1))
            time.append((interval.end, -1))
        
        time.sort()
        ans = cur = 0
        for t in time:
            cur += t[1]
            ans = max(ans, cur)
        
        return ans
