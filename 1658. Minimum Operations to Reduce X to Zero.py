from typing import List
class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        size = len(nums)
        tot = sum(nums)
        if x == tot:
            return size
        if x > tot:
            return -1
        i = j = 0
        curr_sum = 0
        reqd_sum = tot - x
        lst = []
        while i < size and curr_sum < reqd_sum:
            curr_sum += nums[i]
            i += 1
            while j < i and curr_sum > reqd_sum:
                curr_sum -= nums[j]
                j += 1
            if curr_sum == reqd_sum:
                lst.append([i, j])
                curr_sum -= nums[j]
                j += 1
        if lst:
            temp = 0
            for i in lst:
                temp = max(temp, i[0]-i[1])
            return size - temp
        return -1


t = int(input())
b = Solution()
for i in range(t):
    lst = input()
    lst = lst[1:len(lst)-1]
    lst = list(map(int, lst.split(",")))
    x = int(input())
    print(b.minOperations(lst, x))
