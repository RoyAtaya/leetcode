#include <map>
#include <string>

bool isAnagram(std::string s, std::string t) {
    if(s.size() != t.size()){
        return false;
    }
    std::map<char, int> sMap;
    std::map<char, int> tMap;

    for(int i = 0; i < s.size(); i++){
        sMap[s[i]]++;
        tMap[t[i]]++;
    }

    return sMap == tMap;
}