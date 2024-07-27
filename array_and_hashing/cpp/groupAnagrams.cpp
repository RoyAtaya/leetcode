#include <vector>
#include <string>
#include <map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<vector<int>, vector<string>> groups;
    vector<vector<string>> result;
    
    for(auto word: strs){
        vector<int> count(26, 0);
        for(auto c : word){
            count[int(c) - int('a')]++;
        }
        groups[count].push_back(word);
    }

    for(auto list: groups){
        result.push_back(list.second);
    }
    return result;
}