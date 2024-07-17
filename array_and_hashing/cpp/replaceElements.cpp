#include <vector>

std::vector<int> replaceElements(std::vector<int>& arr) {
    int currMax = arr[arr.size() - 1];
    arr[arr.size() - 1] = -1;
    int maxSoFar = 0;
    for(int i = arr.size() - 2; i > -1; i--){
        maxSoFar = currMax;
        currMax = std::max(currMax, arr[i]);
        arr[i] = maxSoFar;
    }
    return arr;
}