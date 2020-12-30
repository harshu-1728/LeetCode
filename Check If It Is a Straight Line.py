# Check If It Is a Straight Line
class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        n = len(coordinates)
        if n == 2:
            return True
        prevx = coordinates[1][0] - coordinates[0][0]
        prevy = coordinates[1][1] - coordinates[0][1]
        if prevx == 0:
            pslope = "NaN"
        else:
            pslope = prevy/prevx
        for i in range(2, n):
            currx = coordinates[i][0] - coordinates[i-1][0]
            curry = coordinates[i][1] - coordinates[i-1][1]
            if currx == 0:
                cslope = "NaN"
            else:
                cslope = curry/currx
            if pslope != cslope:
                return False
            pslope = cslope
        return True