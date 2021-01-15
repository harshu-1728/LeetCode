from typing import List
class Solution:
    def search(self, board, visited, idx, k, word):
        if k == len(word):
            return True
        m = len(board)
        n = len(board[0])
        for i, j in idx:
            if 0<= i < m and 0<= j < n and visited[i][j] == 0 and board[i][j] == word[k]:
                visited[i][j] = 1
                lst = [[i+1,j],[i-1,j],[i,j+1],[i,j-1]]
                ans = self.search(board, visited, lst, k+1, word)
                if ans == False:
                    visited[i][j] = 0
                else:
                    return ans
        return False

    def exist(self, board: List[List[str]], word: str) -> bool:
        m = len(board)
        n = len(board[0])
        visited = [[0] * n for i in range(m)]
        for i in range(m):
            for j in range(n):
                ans = self.search(board, visited, [[i, j]], 0, word)
                if ans:
                    return True
        return False


b = Solution()
print(b.exist([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], "ABCCED"))
print(b.exist([["C","A","A"],["A","A","A"],["B","C","D"]], "AAB"))