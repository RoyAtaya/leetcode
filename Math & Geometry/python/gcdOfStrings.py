def gcdOfStrings(self, str1: str, str2: str) -> str:
    len1, len2 = len(str1), len(str2)

    def isDivisor(lenStr):
        if len1 % lenStr != 0 or len2 % lenStr != 0:
            # check that lenStr is a factor of both strings
            return False
        
        factor1, factor2 = len1 // lenStr, len2 // lenStr # The factors tells us how many times we have to multiply our sub string to get the original strings
        return str1[:lenStr] * factor1 == str1 and str1[:lenStr] * factor2 == str2  


    for lenStr in range(min(len1, len2), 0, -1):
        if isDivisor(lenStr):
            return str1[:lenStr]

    return ""