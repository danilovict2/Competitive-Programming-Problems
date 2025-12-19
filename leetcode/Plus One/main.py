class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        rem = 1
        for i in range(len(digits) - 1, -1, -1):
            digits[i] += rem
            rem = digits[i] // 10
            digits[i] %= 10
        
        if rem > 0:
            digits = [rem] + digits

        return digits
