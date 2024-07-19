func lengthOfLastWord(_ s: String) -> Int {
    var s = s.split(separator: " ") // creates an array of substrings
    var lastWord = ""
    for i in stride(from: s.count - 1, through: 0, by: -1){
        if(s[i].count > 0){
            lastWord = String(s[i])
            break
        }
    }
    return lastWord.count
}