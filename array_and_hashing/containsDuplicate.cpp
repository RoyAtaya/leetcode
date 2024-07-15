#include <iostream>
#include <vector> 
#include <set>

bool containsDuplicate(std::vector<int>& nums) {
    std::set<int> set;
    for(auto number: nums){
        if(set.find(number) != set.end()){
            return true;
        }
        set.insert(number);
    }   
    return false;
}

int main(){
    std::vector<int> v1{1,2,3,1};
    bool res = containsDuplicate(v1);
    if(res){
        std::cout << "TRUE" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }
    return 0;
}