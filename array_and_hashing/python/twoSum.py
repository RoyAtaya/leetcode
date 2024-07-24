def twoSum(self, nums: List[int], target: int) -> List[int]:
    dict = {} # key: n | value: index
    for i, n in enumerate(nums):
        compliment = target - n
        if compliment in dict:
            return [i, dict[compliment]]
        dict[n] = i