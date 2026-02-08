class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        h = []
        for v in [(-a, 'a'), (-b, 'b'), (-c, 'c')]:
            if v[0] != 0:
                h.append(v)

        heapq.heapify(h)

        ans = ""
        while h:
            cnt, char = heapq.heappop(h)
            if len(ans) >= 2 and ans[-1] == char and ans[-2] == char:
                if not h:
                    break 
                
                cnt2, char2 = heapq.heappop(h)
                heapq.heappush(h, (cnt, char))
                ans += char2
                if cnt2 + 1 != 0:
                    heapq.heappush(h, (cnt2 + 1, char2))
            else:
                ans += char
                if cnt + 1 != 0:
                    heapq.heappush(h, (cnt + 1, char))

        return ans
        
