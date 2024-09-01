class Solution {
public:
    int countOdds1(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            if(i % 2 != 0){
                count++;
            }
        }
        return count;
    }

    int countOdds2(int low, int high) {
        int length = high - low + 1;
        if((low % 2 == 0 && high % 2 == 0) || (low % 2 == 0 && high % 2 != 0) || (low % 2 != 0 && high % 2 == 0)){
            return length / 2; 
        }
        return length / 2 + 1; 
    }
};