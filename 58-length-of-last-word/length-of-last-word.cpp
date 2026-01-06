class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxLength = 0;
        int index = s.size() - 1;

        while(index > 0 && s[index] == ' ') index--;

        while(index >= 0 && s[index] != ' '){
            maxLength++;
            index--;
        }

        return maxLength;
    }
};