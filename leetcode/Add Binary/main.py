class Solution:
    def addBinary(self, a: str, b: str) -> str:
        ans = ""
        carry = 0

        i, j = len(a) - 1, len(b) - 1
        while i >= 0 or j >= 0 or carry > 0:
            digA = int(a[i]) if i >= 0 else 0
            digB = int(b[j]) if j >= 0 else 0

            tot = carry + digA + digB
            ans += str(tot % 2)
            carry = tot // 2

            i, j = i - 1, j - 1

        return ans[::-1]
