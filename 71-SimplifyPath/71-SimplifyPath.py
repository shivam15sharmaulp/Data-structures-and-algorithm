# Last updated: 08/05/2026, 09:32:48
class Solution:
    def simplifyPath(self, path: str) -> str:
    
        stack=[]

        components= path.split("/")
        for component in components:

            if component == "..":
                if stack:
                    stack.pop()
            elif component ==".":
                continue
            elif component=="":
                continue
            else:
                stack.append(component)

        return "/"+"/".join(stack)