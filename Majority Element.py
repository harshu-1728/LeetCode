from typing import list
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        d = dict()
        n = len(nums)
        for i in nums:
            d[i] = d.get(i, 0) + 1
            if d[i] > n//2:
                return i