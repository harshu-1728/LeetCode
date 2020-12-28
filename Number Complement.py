import math
class Solution:
    def findComplement(self, num: int) -> int:
        res = ""
        while num>0:
            temp = num%2
            if temp:
                temp = 0
            else:
                temp = 1
            res += str(temp)
            num//=2
        res = res[::-1]
        res = int(res, 2)
        return(res)

b = Solution()
print(b.findComplement(5))
print(b.findComplement(1))
print(b.findComplement(2))
print(b.findComplement(4))
print(b.findComplement(3))
