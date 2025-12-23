class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> row;
        
        for(int i = 0; i < numRows; i++) {
            row.resize(i + 1);
            row[i] = 1;
            row[0] = 1;

            for(int j = i - 1; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }

            result.push_back(row);
        }
        
        return result;
    }
};