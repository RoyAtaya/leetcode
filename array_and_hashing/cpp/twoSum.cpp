#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> diff; //key:n value:i
    int difference = 0;
    for(int i = 0; i < nums.size(); i++){
        difference = target - nums[i];
        if(diff.find(difference) != diff.end()){
            return {i, diff[difference]};
        }
        diff[nums[i]] = i;
    }
    return {};
}