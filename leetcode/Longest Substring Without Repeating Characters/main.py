class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l, best = 0, 0
        seen = {}
        for r in range(len(s)):
            if s[r] in seen:
                l = max(seen[s[r]] + 1, l)
            seen[s[r]] = r
            best = max(best, r - l + 1)
        return best
