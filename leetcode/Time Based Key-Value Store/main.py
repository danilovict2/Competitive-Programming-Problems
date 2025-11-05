class TimeMap:

    def __init__(self):
        self.keyMap = defaultdict(list) # key -> [[value, timestamp]]

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.keyMap[key].append([value, timestamp])

    def get(self, key: str, timestamp: int) -> str:
        ret, instances = "", self.keyMap[key]
        l, r = 0, len(instances) - 1
        
        while l <= r:
            mid = l + (r - l) // 2
            if instances[mid][1] <= timestamp:
                ret = instances[mid][0]
                l = mid + 1
            else:
                r = mid - 1

        return ret

