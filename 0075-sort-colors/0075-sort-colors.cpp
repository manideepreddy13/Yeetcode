class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,k;
        i = 0;
        j = 0;
        k = nums.size()-1;
        int temp;

        while(j<=k){
            if(nums[j] == 0){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
                j++;
            } else if(nums[j] == 1){
                j++;
            } else if(nums[j] == 2){
                temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                k--;
            }
        }
    }
};