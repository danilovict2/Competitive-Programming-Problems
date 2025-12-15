class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for bracket in s:
            if bracket == '[' or bracket == '(' or bracket == '{':
                stack.append(bracket)
            
            if len(stack) == 0:
                return False
            
            if bracket == ']' and stack.pop() != '[':
                return False
            if bracket == ')' and stack.pop() != '(':
                return False
            if bracket == '}' and stack.pop() != '{':
                return False
        
        return len(stack) == 0 
