class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;

        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        

        for(i=0;i<pos.size();i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

        return nums;
    }
};