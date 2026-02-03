class Solution:
    def reorganizeString(self, s: str) -> str:
        freq = defaultdict(int)
        for c in s:
            freq[c] += 1

        h = [(-freq[ch], ch) for ch in freq]
        heapq.heapify(h)
        
        ans = ""
        prev = None
        while h or prev:
            if prev and not h:
                return ""

            cnt, ch = heapq.heappop(h)
            ans += ch
            cnt += 1
            
            if prev:
                heapq.heappush(h, prev)
                prev = None
            
            if cnt != 0:
                prev = (cnt, ch)
        
        return ans

