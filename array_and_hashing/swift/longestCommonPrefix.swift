func longestCommonPrefix(_ strs: [String]) -> String {
    var result : String = ""
    for i in 0..<strs[0].count{
        var currLetter = Array(strs[0])[i]
        for j in 1..<strs.count{
            if(i == strs[j].count || currLetter != Array(strs[j])[i]){
                return result
            }
        }
        result += String(currLetter)
    }
    return result
}