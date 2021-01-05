class Solution:
    # @param A : integer
    # @return an integer

    def pow(self, a, n):
        if n == 1:
            return a
        elif n%2 == 1:
            return self.mul(self.mul(a, self.pow(a, n//2)), self.pow(a, n//2))
        else:
            return self.mul(self.pow(a, n//2), self.pow(a, n//2))

    def mul(self, m1, m2):
        temp = [[0, 0], [0, 0]]
        mod = 1000000007
        temp[0][0] = ((m1[0][0]*m2[0][0])%mod + (m1[0][1]*m2[1][0])%mod)%mod
        temp[0][1] = ((m1[0][0]*m2[0][1])%mod + (m1[0][1]*m2[1][1])%mod)%mod
        temp[1][0] = ((m1[1][0]*m2[0][0])%mod + (m1[1][1]*m2[1][0])%mod)%mod
        temp[1][1] = ((m1[1][0]*m2[0][1])%mod + (m1[1][1]*m2[1][1])%mod)%mod
        return temp


    def solve(self, A):
        if A == 1 or A == 2:
            return 1
        mat = [[1, 1], [1, 0]]
        i = A-1
        temp = self.pow(mat, i)
        return temp[0][0]


n = int(input())
b = Solution()
print(b.solve(n))
