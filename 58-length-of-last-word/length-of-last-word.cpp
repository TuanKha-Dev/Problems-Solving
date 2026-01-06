class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int lastIndex = n - 1;
        int maxLength = 0;

        for(int i = n - 1; i >= 0; i--){
            if(s[i] == ' ')
                lastIndex--;
            else
                break;
        }

        for(int i = lastIndex; i >= 0; i--){
            if(s[i] != ' ')
                maxLength++;
            else
                break;
        }

        return maxLength;
    }
};