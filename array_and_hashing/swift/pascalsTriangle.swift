func generate(_ numRows: Int) -> [[Int]] {
    var res : [[Int]] = []
    res.append([1])
    if(numRows == 1){
        return res
    }
    res.append([1,1])
    if(numRows == 2){
        return res
    }
    for row in 2..<numRows{
        var newRow = [Int](repeating: 1, count:row + 1)
        var currRow = res[row - 1]
        for i in 0..<(currRow.count - 1){
            newRow[i + 1] = currRow[i] + currRow[i + 1]
        }
        res.append(newRow)
    }
    return res
}