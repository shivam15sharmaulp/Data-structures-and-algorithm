# Last updated: 08/05/2026, 09:31:28
import operator

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]

        op_dict = {'+': operator.add,'-': operator.sub,'*': operator.mul,'/': lambda x, y: int(x / y) }

        for x in tokens:
            if x not in ['+',"-","*","/"]:
                stack.append(int(x))
            else:
                a= stack.pop()
                b= stack.pop()
                stack.append(op_dict[x](b, a))

        return stack[-1]