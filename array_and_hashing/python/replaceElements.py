def replaceElements(self, arr: List[int]) -> List[int]:
    res = [-1] * len(arr)
    maxSoFar = arr[len(arr) - 1]
    for i in range(len(arr) - 2, -1, -1):
        res[i] = maxSoFar
        maxSoFar = max(maxSoFar, arr[i])
    return res