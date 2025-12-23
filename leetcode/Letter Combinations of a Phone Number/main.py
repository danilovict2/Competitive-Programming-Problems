class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if len(digits) == 0:
            return []
            
        digitToChar = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "qprs",
            "8": "tuv",
            "9": "wxyz",
        }

        ans = []

        def dfs(i, combination):
            if i >= len(digits):
                ans.append(combination)
                return
            
            for letter in digitToChar[digits[i]]:
                dfs(i + 1, combination + letter)
        
        dfs(0, "")
        return ans

