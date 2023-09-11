class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        std::sort(intervals.begin(),intervals.end());

        int i;
        for(i=0;i<intervals.size();i++){
            if(result.empty() || result.back()[1] < intervals[i][0]){
                result.push_back(intervals[i]);
            } else {
                result.back()[1] = max(result.back()[1],intervals[i][1]);
            }
        }

        return result;
    }
};