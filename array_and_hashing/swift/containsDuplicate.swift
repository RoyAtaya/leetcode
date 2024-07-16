import Foundation

func containsDuplicate(_ nums: [Int]) -> Bool{
    var set:Set<Int> = Set<Int>();
    for number in nums{
        if(set.contains(number)){
            return true;
        }
        set.insert(number);
    }
    return false;
}

print("Swift containsDuplicate: \(containsDuplicate([1,2,3,4,1]))");