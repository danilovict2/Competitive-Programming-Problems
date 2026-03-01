# """
# This is MountainArray's API interface.
# You should not implement it, or speculate about its implementation
# """
#class MountainArray:
#    def get(self, index: int) -> int:
#    def length(self) -> int:

class Solution:
    def findInMountainArray(self, target: int, mountainArr: 'MountainArray') -> int:
        n = mountainArr.length()
        cache = {}

        def get(i):
            if i not in cache:
                cache[i] = mountainArr.get(i)
            return cache[i]

        l, r = 1, n - 2
        idx = -1
        while l <= r:
            mid = l + (r - l) // 2
            midElem = get(mid) 
            lElem = get(mid - 1)
            rElem = get(mid + 1)

            if midElem > lElem and midElem > rElem:
                idx = mid
                break
            elif midElem > lElem and midElem < rElem:
                l = mid + 1
            else:
                r = mid - 1
        
        l, r = 0, idx - 1
        while l <= r:
            mid = l + (r - l) // 2
            midElem = get(mid)

            if midElem == target:
                return mid
            elif midElem > target:
                r = mid - 1
            else:
                l = mid + 1
        
        l, r = idx, n - 1
        while l <= r:
            mid = l + (r - l) // 2
            midElem = get(mid)

            if midElem == target:
                return mid
            elif midElem > target:
                l = mid + 1
            else:
                r = mid - 1
        
        return -1
