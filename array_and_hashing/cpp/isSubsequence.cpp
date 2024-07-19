#include <string>

bool isSubsequence(std::string s, std::string t) {
    if (s.size() > t.size()){
        return false;
    }
    int s_i = 0, t_i = 0;

    while(s_i < s.size() && t_i < t.size()) {
        if(s[s_i] == t[t_i]){
            s_i++;
        }
        t_i++;
    }
    return s_i == s.size();
}