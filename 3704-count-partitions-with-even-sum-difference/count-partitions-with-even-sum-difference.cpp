class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        int leftSum = 0;
        int count = 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            leftSum += nums[i];
            totalSum -= nums[i];

            if(leftSum % 2 == totalSum % 2)
                count++;
        }

        return count;
    }
};