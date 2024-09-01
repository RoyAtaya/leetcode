class Solution:
    def countOdds(self, low: int, high: int) -> int:
        length = high - low + 1
        if( (low % 2 == 0 and high % 2 == 0) or (low % 2 == 0 and high % 2 != 0) or (low % 2 != 0 and high % 2 == 0)):
            return length // 2
        return (length // 2) + 1 