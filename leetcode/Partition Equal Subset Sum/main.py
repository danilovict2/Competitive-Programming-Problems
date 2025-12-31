class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums) % 2 != 0:
            return False
        
        dp = set([0])
        target = sum(nums) // 2

        for i in range(len(nums) - 1, -1, -1):
            newDp = set()
            for t in dp:
                if t + nums[i] == target:
                    return True
                newDp.add(t)
                newDp.add(t + nums[i])
            dp = newDp 
            
        return False
