//Brute Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        int i;
        int k=1;

        res.push_back(nums[0]);

        for(i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                res.push_back(nums[i+1]);
                k++;
            }
        }

        for(i=0;i<nums.size();i++){
            if(i<k){
                nums[i] = res[i];
            } else {
                nums[i] = -500;
            }
        }

        return k;
    }
};
