class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool remember = false;

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] + 1 == 10) {
                remember = true;
                digits[i] = 0;
            }
            else {
                digits[i]++;
                remember = false;
            }

            if(!remember)
                break;
        }

        if(remember) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};