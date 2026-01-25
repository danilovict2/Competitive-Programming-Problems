class Solution:
    def minInterval(self, intervals: List[List[int]], queries: List[int]) -> List[int]:
        intervals.sort()
        ans = {}
        i = 0
        minHeap = []

        for q in sorted(queries):
            while i < len(intervals) and intervals[i][0] <= q:
                s, e = intervals[i]
                heapq.heappush(minHeap, [e - s + 1, e])
                i += 1
            
            while minHeap and minHeap[0][1] < q:
                heapq.heappop(minHeap)
            
            ans[q] = minHeap[0][0] if minHeap else -1
        
        return [ans[q] for q in queries]
