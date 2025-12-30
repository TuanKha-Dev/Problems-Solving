class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int result = 0;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int leftSum = 0;
        int rightSum = sum;

        for(int i = 0; i < nums.size() - 1; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];

            if((leftSum - rightSum) % 2 == 0)
                result++;
        }

        return result;
    }
};