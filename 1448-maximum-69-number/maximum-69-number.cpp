class Solution {
public:
    int maximum69Number (int num) {
        int place = 1;
        int temp = num;
        int sixPosition = -1;

        while(temp > 0){
            if(temp % 10 == 6)
                sixPosition = place;

            temp /= 10;
            place *= 10;
        }

        return sixPosition == -1 ? num : num + 3 * sixPosition;
    }
};