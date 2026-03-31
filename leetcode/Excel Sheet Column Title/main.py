class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        ans = ""

        while columnNumber:
            columnNumber -= 1
            offset = columnNumber % 26
            ans += chr(ord('A') + offset)
            columnNumber //= 26

        return ans[::-1]
