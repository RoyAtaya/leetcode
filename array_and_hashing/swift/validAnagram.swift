func isAnagram(_ s: String, _ t: String) -> Bool {
    if(s.count != t.count){
        return false
    }
    var s = Array(s), t = Array(t)
    var mappedS = s.map{($0, 1)}
    var mappedT = t.map{($0, 1)}
    return  Dictionary(mappedS, uniquingKeysWith: +) == Dictionary(mappedT, uniquingKeysWith: +)
}