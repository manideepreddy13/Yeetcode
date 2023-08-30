class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());

        vector<int> res;
        int count=1;

        int i;
        for(i=0;i<nums.size()-1;i++){
            cout<<nums[i]<<endl;
        }
        for(i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                count++;
            } else {
                if(count > nums.size()/3){
                    cout<<"Count of"<<nums[i]<<" and "<<i<<" : "<<count<<endl;
                    res.push_back(nums[i]);
                    count = 1;
                }
                count = 1;
            }
        }

        if(count > nums.size()/3){
                    res.push_back(nums[i]);
                }

        return res;
    }
};