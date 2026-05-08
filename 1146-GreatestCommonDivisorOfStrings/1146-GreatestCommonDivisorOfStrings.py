# Last updated: 08/05/2026, 09:28:35
class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        strx=""
        if len(str1)<=len(str2):
            maxL =0
            for i in range(len(str1)):
                L2 = str2.count(str1[:i+1])
                L1= str1.count(str1[:i+1])
                if (((i+1)*L2) == len(str2) and ((i+1)*L1) == len(str1)):
                    maxL = i+1
                    strx= str1[:i+1]

        else:
            maxL =0
            for i in range(len(str2)):
                L2 = str2.count(str2[:i+1])
                L1= str1.count(str2[:i+1])
                if (((i+1)*L2) == len(str2) and ((i+1)*L1) == len(str1)):
                    maxL = i+1
                    strx= str2[:i+1]

        return strx
