class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s) or t == "":
            return ""
        
        sCount, tCount = {}, {}
        for c in t:
            tCount[c] = 1 + tCount.get(c, 0)
        
        l, matches = 0, 0
        ans, ansLen = [-1, -1], float("inf")
        for r in range(len(s)):
            sCount[s[r]] = 1 + sCount.get(s[r], 0)
            
            if s[r] in tCount and sCount[s[r]] == tCount[s[r]]:
                matches += 1
            
            while matches == len(tCount):
                if (r - l + 1) < ansLen:
                    ans = [l, r]
                    ansLen = r - l + 1

                sCount[s[l]] -= 1
                if s[l] in tCount and sCount[s[l]] < tCount[s[l]]:
                    matches -= 1
                l += 1
        
        l, r = ans
        return s[l:r+1] if ansLen != float("inf") else ""
