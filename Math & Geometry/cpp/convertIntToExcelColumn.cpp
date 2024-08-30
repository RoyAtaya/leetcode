#include<string>
#include<algorithm>
using namespace std;

string convertToTitle(int columnNumber) {
    string title = "";
    int offset = 0;
    while(columnNumber > 0){
        offset = (columnNumber - 1) % 26;
        title += 'A' + offset;
        columnNumber = (columnNumber - 1) / 26;
    }
    reverse(title.begin(), title.end());
    return title;
}