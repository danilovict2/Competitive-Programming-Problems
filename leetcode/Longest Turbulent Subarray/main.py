class Solution:
    def maxTurbulenceSize(self, arr: List[int]) -> int:
        n = len(arr)
        ans = curr = 0
        sign = -1

        for i in range(n - 1):
            if arr[i] > arr[i + 1]:
                curr = curr + 1 if sign == 0 else 1
                sign = 1
            elif arr[i] < arr[i + 1]:
                curr = curr + 1 if sign == 1 else 1
                sign = 0
            else:
                sign = -1
                curr = 0
            
            ans = max(ans, curr)
        
        return ans + 1
