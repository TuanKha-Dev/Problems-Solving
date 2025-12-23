class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);

        result[0] = {1};
        if(numRows == 1)
            return result;
        
        for(int i = 1; i < numRows; i++) {
            vector<int>& previous = result[i - 1];
            vector<int>& current = result[i];

            current.push_back(1);

            for(int j = 0; j < previous.size() - 1; j++) {
                current.push_back(previous[j] + previous[j + 1]);
            }

            current.push_back(1);
        }
        
        return result;
    }
};