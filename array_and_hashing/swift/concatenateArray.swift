func getConcatenation(_ nums: [Int]) -> [Int] {
    var res = Array(repeating: 0, count: 2 * nums.count)
    for i in 0..<nums.count{
        res[i] = nums[i]
        res[i + nums.count] = nums[i]
    }
    return res 
}