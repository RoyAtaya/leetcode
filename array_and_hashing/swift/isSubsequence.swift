func isSubsequence(_ s: String, _ t: String) -> Bool {
    if(s.count > t.count){
        return false
    }
    var sIdx = 0, tIdx = 0
    var s = Array(s), t = Array(t)
    while(sIdx < s.count && tIdx < t.count){
        if(s[sIdx] == t[tIdx]){
            sIdx+=1
        }
        tIdx+=1
    }
    return sIdx == s.count
}