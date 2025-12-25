class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.size() - 1;

        for(int i = 0; i <= n / 2; i++) {
            if(str[i] != str[n - i])
                return false;
        }

        return true;
    }
};