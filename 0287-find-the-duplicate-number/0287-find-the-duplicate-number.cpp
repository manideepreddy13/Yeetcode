class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i,repeated_num;
        for(i=1;i<=nums.size()-1;i++){
            mp[i] = 0;
        }

        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(i=1;i<=nums.size()-1;i++){
            if(mp[i] >= 2){
                repeated_num = i;
            }
        }

        return repeated_num;
    }
};