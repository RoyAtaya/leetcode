def convertToTitle(self, columnNumber: int) -> str:
    # O(log n) => Log base 26 of n
    title = ""
    # convert from base 10 to base 26
    # because we start at 1, we need to subtract 1 from columnNumber before we do the % and // operators
    while columnNumber > 0:
        offset = (columnNumber - 1) % 26
        title += chr(ord('A') + offset)
        columnNumber = (columnNumber - 1) // 26

    return title[::-1]
