class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        for(int i = 0; i < strs[0].size(); i++) {
            string sub = result + strs[0][i];

            for(int j = 1; j < strs.size(); j++) {
                if(strs[j].contains(sub) && strs[j][i] == strs[0][i])
                    continue;
                return result;
            }

            result = sub;
        }

        return result;
    }
};