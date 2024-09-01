#include <string>
using namespace std;

class Solution {
public:
    bool isDivisor(int gcdLen, int str1Len, int str2Len, string str1, string str2){
        if(str1Len % gcdLen || str2Len % gcdLen){
            // Check if gcdLen is a factor of the original strings
            return false;
        }

        int factor1 = str1Len / gcdLen;
        int factor2 = str2Len / gcdLen;

        string newStr1 = "";
        string newStr2 = "";
        
        for(int i = 0; i < factor1; i++){
            newStr1 += str1.substr(0, gcdLen);
        }

        for(int i = 0; i < factor2; i++){
            newStr2 += str1.substr(0, gcdLen);
        }
        
        return (newStr1 == str1 && newStr2 == str2);
    }

    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.size();
        int len2 = str2.size();
        string res = "";
        
        for(int i = min(len1, len2); i > 0; i--){
            if(isDivisor(i, len1, len2, str1, str2)){
                res = str1.substr(0, i);
                return res; 
            }
        }

        return res;
    }
};