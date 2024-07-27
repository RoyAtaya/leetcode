func groupAnagrams(_ strs: [String]) -> [[String]] {
    var res = [[Int]:[String]]()
    let baseChar : Character = "a"
    for word in strs{
        var count : [Int] = Array(repeating: 0, count: 26)
        for ch in word{
            let index = Int(ch.asciiValue! - baseChar.asciiValue!)
            count[index] += 1
        }
        res[count, default: []].append(word)
    }
    return Array(res.values)
}