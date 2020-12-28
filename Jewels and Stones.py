class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewels = sorted(jewels)
        stones = sorted(stones)
        count = 0
        i = j = 0
        while i < len(jewels) and j < len(stones):
            if jewels[i] == stones[j]:
                count += 1
                j += 1
            elif jewels[i] < stones[j]:
                i += 1
            else:
                j += 1
        return count

b = Solution()
print(b.numJewelsInStones(jewels = "aA", stones = "aAAbbbb"))
print(b.numJewelsInStones(jewels = "z", stones = "ZZ"))
        