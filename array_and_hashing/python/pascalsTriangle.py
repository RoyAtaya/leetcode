def generate(self, numRows: int) -> List[List[int]]:
    res = []
    res.append([1])
    if(numRows == 1):
        return res
        
    res.append([1,1])
    if(numRows == 2):
        return res

    for row in range(2, numRows):
        newRow = [0] * (row + 1)
        newRow[0], newRow[row] = 1, 1
        currRow = res[row - 1]
        for i in range(len(currRow) -1):
            newRow[i + 1] = currRow[i] + currRow[i + 1]
        res.append(newRow)
    
    return res