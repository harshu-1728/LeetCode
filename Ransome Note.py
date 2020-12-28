class Solution:
    def canConstruct(self, r: str, m: str) -> bool:
        ra = [0]*26
        ma = [0]*26
        for i in r:
            ra[ord(i)-97] += 1
        for i in m:
            ma[ord(i)-97] += 1
        # print(ra)
        # print(ma)
        for i in r:
            if ma[ord(i)-97] > 0:
                ma[ord(i)-97] -= 1
                ra[ord(i)-97] -= 1
        return sum(ra) == 0

b = Solution()
print(b.canConstruct("aab", "baa"))
print(b.canConstruct("aa", "aba"))
print(b.canConstruct("bg", "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"))
print(b.canConstruct("aa", "ab"))