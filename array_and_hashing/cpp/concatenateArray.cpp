#include <vector>

std::vector<int> getConcatenation(std::vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        nums.push_back(nums[i]);
    }
    return nums;
}