class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num1 = num2 = -(1e9)
        count1 = count2 = 0

        for num in nums:
            if num == num1:
                count1 += 1
            elif num == num2:
                count2 += 1
            elif count1 == 0:
                num1 = num
                count1 = 1
            elif count2 == 0:
                num2 = num
                count2 = 1
            else:
                count1 -= 1
                count2 -= 1

        count1 = count2 = 0
        for num in nums:
            count1 += 1 if num == num1 else 0
            count2 += 1 if num == num2 else 0

        ans = []
        if count1 > (n // 3):
            ans.append(num1)
        if count2 > (n // 3):
            ans.append(num2)
        
        return ans
