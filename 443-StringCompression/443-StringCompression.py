# Last updated: 08/05/2026, 09:29:27
from collections import OrderedDict
class Solution:
    def compress(self, chars: List[str]) -> int:
        
        count = 1
        index=0

        for i in range(1, len(chars)):
            if chars[i]==chars[i-1] and i!=len(chars)-1:
                count+=1
            elif chars[i]==chars[i-1] and i==len(chars)-1:
                count+=1
                chars[index]=chars[i-1]
                index+=1
                print(count, index)
                if count>1:
                    for j,x in enumerate(list(str(count))):
                        chars[index]=x
                        index+=1
                        count = 1
                index-=1

            else:
                chars[index]=chars[i-1]
                index+=1
                print(count, index)
                if count>1:
                    for j,x in enumerate(list(str(count))):
                        chars[index]=x
                        index+=1
                        count = 1
                #check if last element is unique
                if i==len(chars)-1 and count==1:
                    chars[index]=chars[i]


                
        print(chars)
        if len(chars) !=1:
            chars = chars[:index+1]
        return len(chars)