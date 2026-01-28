class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans, n = [], len(nums)
        visited = [False] * n 

        def dfs(permutation = []):
            if len(permutation) == n:
                ans.append(permutation)
                return
            
            for i in range(n):
                if visited[i]:
                    continue
                
                if i and nums[i] == nums[i - 1] and not visited[i - 1]:
                    continue
                
                visited[i] = True
                dfs(permutation + [nums[i]])
                visited[i] = False

        dfs()
        return ans
 
