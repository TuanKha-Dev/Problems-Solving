class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sumOfApple = 0;

        for(int i = 0; i < apple.size(); i++){
            sumOfApple += apple[i];
        }

        sort(capacity.begin(), capacity.end());

        int currentApple = 0;
        int count = 0;

        for(int i = capacity.size() - 1; i >= 0; i--){
            currentApple += capacity[i];
            count++;

            if(currentApple >= sumOfApple)
                return count;
        }

        return count;
    }
};