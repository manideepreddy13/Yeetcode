class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int s = 0;

        if(nums.size() == 1){
            return nums[0];
        }

        int i;
        for(i=0;i<nums.size();i++){
            s = s + nums[i];
            s = max(s,nums[i]);
            m = max(s,m);
        }

        return m;
    }
};