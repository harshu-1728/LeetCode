class Solution:
    def firstUniqChar(self, s: str) -> int:
        arr = [0] * 255
        for i in s:
            arr[ord(i)] += 1
        for i in range(len(s)):
            if arr[ord(s[i])] == 1:
                return i
        return -1