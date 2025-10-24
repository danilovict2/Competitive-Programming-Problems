from collections import defaultdict


class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        count = defaultdict(int)
        freq = [[] for _ in range(len(nums) + 1)]

        for num in nums:
            count[num] += 1
        for num in count:
            freq[count[num]].append(num)

        ret = []
        for i in range(len(freq) - 1, 0, -1):
            for num in freq[i]:
                ret.append(num)
                if len(ret) == k:
                    return ret

        return []
