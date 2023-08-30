class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
    int sum = 0;
    unordered_map<int, int> sumFrequency;
    sumFrequency[0] = 1; 

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sumFrequency.find(sum - k) != sumFrequency.end()) {
            count += sumFrequency[sum - k];
        }
        sumFrequency[sum]++;
    }

    return count;
    }
};