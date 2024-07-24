func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
    var dict = [Int: Int]()
    var compliment : Int = 0
    for (i, n) in nums.enumerated(){
        compliment = target - n
        if dict.keys.contains(compliment){
            return [i, dict[compliment]!]
        }
        dict[n] = i
    }
    return []
}