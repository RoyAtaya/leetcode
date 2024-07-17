func replaceElements(_ arr: [Int]) -> [Int] {
    var res = Array(repeating: -1, count: arr.count)
    var maxSoFar = arr[arr.count - 1]
    for i in stride(from: arr.count - 2, through: 0, by: -1){
        res[i] = maxSoFar
        maxSoFar = max(maxSoFar, arr[i])
    }
    return res
}