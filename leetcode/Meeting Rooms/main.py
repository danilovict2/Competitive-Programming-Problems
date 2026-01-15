"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        intervals.sort(key=lambda a: a.start)
        meeting_until = 0
        for interval in intervals:
            if interval.start < meeting_until:
                return False
            meeting_until = interval.end 
        return True
