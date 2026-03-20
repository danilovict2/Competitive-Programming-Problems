class Solution:
    def decodeString(self, s: str) -> str:
        stack = []

        for c in s:
            if c == ']':
                curr = ""
                while stack[-1] != '[':
                    curr = stack.pop() + curr
                stack.pop() # [

                k = ""
                while stack and stack[-1].isdigit():
                    k = stack.pop() + k
                
                stack.append(int(k) * curr)
            else:
                stack.append(c)

        return "".join(stack)
