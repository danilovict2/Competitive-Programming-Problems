class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        trips.sort(key = lambda t: t[1]) 
        
        h = []
        occ = 0

        for num, fr, to in trips:
            while h and h[0][0] <= fr:
                occ -= heapq.heappop(h)[1]
            
            occ += num
            if occ > capacity:
                return False
            
            heapq.heappush(h, (to, num))
        
        return True

