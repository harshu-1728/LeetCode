# Flood Fill
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        q = [[sr, sc]]
        color = image[sr][sc]
        m, n = len(image), len(image[0])
        visited = [[0]*n for i in range(m)]
        visited[sr][sc] = 1
        while len(q) > 0:
            i, j = q.pop(0)
            # print(i, j)
            if image[i][j] == color:
                image[i][j] = newColor
                if 0<=i+1<m and 0<=j<n and visited[i+1][j]==0:
                    q.append([i+1,j])
                    visited[i+1][j]=1
                if 0<=i-1<m and 0<=j<n and visited[i-1][j]==0:
                    q.append([i-1,j])
                    visited[i-1][j]=1
                if 0<=i<m and 0<=j+1<n and visited[i][j+1]==0:
                    q.append([i,j+1])
                    visited[i][j+1]=1
                if 0<=i<m and 0<=j-1<n and visited[i][j-1]==0:
                    q.append([i,j-1])
                    visited[i][j-1]=1
        return image