class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int c=0;
        int n = nums.size();
        vector<int> org;

        for(i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                c = i+1;
                break;
            }
        }

        if(c==0){
            return true;
        }

        for(i=0;i<n;i++){
            org.push_back(nums[(i+c)%n]);
        }

        for(i=0;i<n-1;i++){
            if(org[i] > org[i+1]){
                return false;
            }
        }

        return true;
    }
};
