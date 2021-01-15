from typing import List
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        larr = [1] * n
        rarr = [1] * n
        ans = [1] * n
        t1 = t2 = 1
        for i in range(n):
            t1 *= nums[i]
            t2 *= nums[n-i-1]
            larr[i] = t1
            rarr[n-i-1] = t2
        for i in range(n):
            if i == 0:
                ans[i] = rarr[i+1]
            elif i == n-1:
                ans[i] = larr[i-1]
            else:
                ans[i] = larr[i-1] * rarr[i+1]
        return ans


b = Solution()
print(b.productExceptSelf([1,2,3,4]))
