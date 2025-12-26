class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        if(n == 0)
            return 0;
        
        vector<int> lastIndex(256, -1);
        int result = 0;
        int start = 0;

        for (int end = 0; end < n; end++) {
            start = max(start, lastIndex[s[end]] + 1);
            result = max(result, end - start + 1);
            lastIndex[s[end]] = end;
        }

        return result;
    }
};