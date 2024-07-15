from typing import List

def containsDuplicate(nums: List[int]) -> bool:
    mySet = set()
    for number in nums:
        if number in mySet:
            return True
        mySet.add(number)
    return False



print(containsDuplicate([1,2,3,1]))