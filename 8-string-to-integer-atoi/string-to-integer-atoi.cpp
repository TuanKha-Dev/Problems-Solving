class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int sign = 1;
        int i = 0;
        long long result = 0;

        if(n == 0)
            return 0;
        
        while(i < n && s[i] == ' ') i++;

        if(i < n && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-')
                sign = -1;
            i++;
        }
        

        while(i < n && s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');

            if(sign == 1 && result > INT_MAX)
                return INT_MAX;
            
            if(sign == -1 && -result < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * result;
    }
};