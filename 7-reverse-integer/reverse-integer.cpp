class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long result = 0;
        while(temp != 0) {
            if(result > INT_MAX / 10 || result < INT_MIN / 10)
                return 0;
                
            result *= 10;
            result += (temp % 10);
            temp /= 10;
        }
        return result;
    }
};