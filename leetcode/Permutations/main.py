class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        selected = set()

        def dfs(permutation = []):
            if len(permutation) == len(nums):
                ans.append(permutation)
                return

            for i in range(len(nums)):
                if i in selected:
                    continue

                selected.add(i)
                dfs(permutation + [nums[i]])
                selected.remove(i)
        
        dfs()
        return ans
