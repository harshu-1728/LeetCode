class Solution:
    # @param A : integer
    # @return an integer
    def solve(self, A):
        if A == 1 or A == 2:
            return 1
        mod = 1000000007
        mat = [[1, 1], [1, 0]]
        i = 1
        while i*2 <= A-1:
            i = i * 2
            temp = [[0, 0], [0, 0]]
            for t in range(2):
                for j in range(2):
                    for k in range(2):
                        temp[t][j] += (mat[t][k] % mod * mat[k][j] % mod) % mod
            mat = list(temp)
        if i == A-1:
            return mat[0][0]
        i += 1
        curr = mat[0][0]
        prev = mat[0][1]
        while i < A:
            temp = (curr % mod + prev % mod) % mod
            prev = curr
            curr = temp
            i += 1
        return curr


n = int(input())
b = Solution()
print(b.solve(n))
