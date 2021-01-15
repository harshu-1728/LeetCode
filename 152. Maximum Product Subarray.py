from typing import List
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        gmax = max(nums)
        lmax = lmin = 1
        for i in nums:
            temp = lmax * i
            lmax = max(lmax*i, lmin*i, i)
            lmin = min(temp, lmin*i, i)
            gmax = max(lmax, gmax)
        return gmax


b = Solution()
t = int(input())
for i in range(t):
    lst = input()
    lst = lst[1:len(lst)-1]
    lst = list(map(int, lst.split(",")))
    print(b.maxProduct(lst))