#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    res.push_back({1}); // Row 1
    if(numRows == 1){
        return res;
    }
    res.push_back({1,1}); // Row 2
    if(numRows == 2){
        return res;
    }
    // Row 3 onwards
    for(int row = 2; row < numRows; row++){
        vector<int> newRow{1};
        for(int elem = 0; elem < row - 1; elem++){
            newRow.push_back(res[row - 1][elem] + res[row - 1][elem + 1]);
        }
        newRow.push_back(1);
        res.push_back(newRow);
    }
    return res;
}