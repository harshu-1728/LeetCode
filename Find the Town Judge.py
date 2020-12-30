# Find the Town Judge
class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        lst = [1] * (N+1)
        lst1 = [0] * (N+1)
        lst[0] = 0
        for i in trust:
            lst[i[0]] = 0
            lst1[i[1]] += 1
        for i in range(1, N+1):
            if lst1[i] == N-1 and lst[i] == 1:
                return i
        return -1