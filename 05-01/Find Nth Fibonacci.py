class Solution:
    # @param A : integer
    # @return an integer
    def solve(self, A):
        if A == 1 or A == 2:
            return 1
        mod = 1000000007
        mat = [[1, 1], [1, 0]]
        i = 1
        while i*i <= A-1:
            if i == 1:
                i = 2
            else:
                i = i*i
            temp = [[0, 0], [0, 0]]
            for i in range(len(mat)):
                for j in range(mat[0]):
                    for k in range():
                        temp[i][j] += (mat[i][k] % mod * mat[k][j] % mod) % mod
            mat = temp
        if i == A-1:
            return mat[0][0]


n = int(input())
b = Solution()
print(b.solve(n))
