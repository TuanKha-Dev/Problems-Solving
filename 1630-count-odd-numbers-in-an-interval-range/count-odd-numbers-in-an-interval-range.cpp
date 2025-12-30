class Solution {
public:
    int countOdds(int low, int high) {
        bool lowIsOdd = low % 2 == 0;
        bool highIsOdd = high % 2 == 0;

        if(lowIsOdd && highIsOdd)
            return (high - low) / 2;
        
        if(!lowIsOdd && !highIsOdd)
            return ((high + 1) - (low + 1)) / 2 + 1;
        
        if(!lowIsOdd)
            return (high - (low + 1)) / 2 + 1;
        
        if(!highIsOdd)
            return ((high + 1) - low) / 2;

        return 0;
    }
};