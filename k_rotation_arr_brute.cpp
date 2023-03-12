class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;

        int i;
        int n = nums.size();
        for(i=0;i<n;i++){
            res.push_back(nums[(i-k+100*n)%n]);
        }

        for(i=0;i<n;i++){
            nums[i] = res[i];
        }
    }
};
