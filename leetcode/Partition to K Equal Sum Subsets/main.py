class Solution:
    def canPartitionKSubsets(self, nums: List[int], k: int) -> bool:
        if sum(nums) % k != 0:
            return False
        

        nums.sort(reverse=True)
        target = sum(nums) // k
        n = len(nums)
        used = [False] * n

        def dfs(i, k, s):
            if k == 0:
                return True
            if s == target:
                return dfs(0, k - 1, 0)

            for j in range(i, n):
                if used[j] or s + nums[j] > target:
                    continue
                
                used[j] = True
                if dfs(j + 1, k, s + nums[j]):
                    return True
                used[j] = False

                if s == 0:
                    return False

            return False
        
        return dfs(0, k, 0)
