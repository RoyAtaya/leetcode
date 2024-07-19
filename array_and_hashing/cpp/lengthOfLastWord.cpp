#include <string>

int lengthOfLastWord(std::string s) {
    int res = 0;
    int i = s.size() - 1;
    for(; i > -1; i--){
        if(s[i] != ' '){
            break;
        }
    }
    for(; i > -1; i--){
        if(s[i] == ' '){
            break;
        }
        res++;
    }
    return res;
}