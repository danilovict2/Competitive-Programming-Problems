class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        def mergeSort(arr, l, r):
            if l >= r:
                return 

            m = l + (r - l) // 2
            mergeSort(arr, l, m)
            mergeSort(arr, m + 1, r)
            merge(arr, l, m, r)
        
        def merge(arr, l, m, r):
            first, second = arr[l:m + 1], arr[m + 1:r + 1]
            i = j = 0
            k = l

            while i < len(first) and j < len(second):
                if first[i] < second[j]:
                    arr[k] = first[i]
                    i += 1
                else:
                    arr[k] = second[j]
                    j += 1
                
                k += 1
            
            while i < len(first):
                arr[k] = first[i]
                i += 1
                k += 1
            
            while j < len(second):
                arr[k] = second[j]
                j += 1
                k += 1
            
        
        mergeSort(nums, 0, len(nums) - 1)
        return nums
