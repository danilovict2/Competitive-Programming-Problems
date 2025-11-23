'''
class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        cnt = [0] * 26
        for task in tasks:
            cnt[ord(task) - ord('A')] += 1
        
        maxf = max(cnt)
        maxCount = 0
        for c in cnt:
            maxCount += 1 if c == maxf else 0
        
        t = (maxf - 1) * (n + 1) + maxCount
        return max(len(tasks), t)
'''

class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        cnt = [0] * 26
        for task in tasks:
            cnt[ord(task) - ord('A')] += 1
        
        maxHeap = [-c for c in cnt if c > 0]
        heapq.heapify(maxHeap)

        t = 0
        q = deque()
        while q or maxHeap:
            t += 1

            if maxHeap:
                cnt = heapq.heappop(maxHeap) + 1
                if cnt:
                    q.append([cnt, t + n])
            
            if q and q[0][1] == t:
                heapq.heappush(maxHeap, q.popleft()[0])
        
        return t

                


        
