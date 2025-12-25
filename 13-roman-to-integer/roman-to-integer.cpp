class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int prev = 0;

        for(int i = s.size() - 1; i >=0; i--) {
            int curr = charToInt(s[i]);

            if(curr < prev)
                result -= curr;
            else 
                result += curr;
            
            prev = curr;
        }

        return result;
    }

private:
    int charToInt(char x) {
        switch (x) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};