class Solution:
    def mostBooked(self, n: int, meetings: List[List[int]]) -> int:
        meetings.sort()
        available = [i for i in range(n)]
        busy = [] # (end_time, room)
        cnt = {i: 0 for i in range(n)}

        for start, end in meetings:
            while busy and busy[0][0] <= start:
                end_time, room = heapq.heappop(busy)
                heapq.heappush(available, room)
            
            if available:
                room = heapq.heappop(available)
                cnt[room] += 1
                heapq.heappush(busy, (end, room))
            else:
                end_time, room = heapq.heappop(busy)
                cnt[room] += 1
                heapq.heappush(busy, (end - start + end_time, room))
        
        ans, mv = None, float("-inf")
        for k in cnt:
            if cnt[k] > mv:
                mv = cnt[k]
                ans = k
        
        return ans
