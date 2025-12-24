class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        unordered_set<int> existedIndex;
        int n = fruits.size();
        int result = 0;
        bool exist;

        for(int i = 0; i < n; i++) {
            exist = false;
            for(int j = 0; j < n; j++) {
                if(existedIndex.count(j))
                    continue;
                if(fruits[i] <= baskets[j]) {
                    exist = true;
                    existedIndex.insert(j);
                    break;
                }
            }
            if(!exist) {
                result++;
            }
        }

        return result;
    }
};