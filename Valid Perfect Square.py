# Valid Perfect Square
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num == 1:
            return True
        i = 2
        while(i*i < num):
            i += 1
        if i*i == num:
            return True
        return False