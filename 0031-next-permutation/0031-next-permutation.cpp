class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int i = nums.size()-1;
       int j = -1;
       int k = -1;
       int min_sub;

        if(nums.size() == 2){
            min_sub = nums[0];
            nums[0] = nums[1];
            nums[1] = min_sub;
        } else {
while(i>0){
           if(nums[i-1]<nums[i]){
               j = i-1;
               break;
           }
           i--;
       }

       if(j == -1){
           reverse(nums,0,nums.size()-1);
       } else{
           if(nums.size() == 3 && j == 1){
               k = 2;
               min_sub = nums[k];
            nums[k] = nums[j];
            nums[j] = min_sub;
           } else {
           i = j+1;
           cout<<nums[i]<<endl;
           while(i<nums.size()){
               if(nums[i]>nums[j]){
                   k = i;
               }


               i++;
           }

           cout<<nums[k];

           
            min_sub = nums[k];
            nums[k] = nums[j];
            nums[j] = min_sub;

            reverse(nums,j+1,nums.size()-1);

           }
           

       }

        }

       

    }

    void reverse(vector<int>& nums, int i, int j){
        int temp;
        while(i<j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
};