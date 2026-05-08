# Last updated: 08/05/2026, 09:29:38
class Solution:
    def decodeString(self, s: str) -> str:
        stack=[] 

        for i in range(len(s)):
            if s[i]!=']':
                stack.append(s[i])

            else:
                strs=""
                while stack and stack[-1]!='[':
                    strs= stack.pop()+strs
                stack.pop()
                k=''
                while stack and stack[-1].isnumeric():
                    k= stack.pop()+k

                stack.append(strs*int(k))

        return "".join(stack)
        