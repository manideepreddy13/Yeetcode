class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        vector<std::pair<int,int>> vec;

        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    vec.push_back(std::make_pair(i,j));
                }
            }
        }

       

        for (const auto& pair : vec) {
            for(j=0;j<matrix[0].size();j++){
                matrix[pair.first][j] = 0;
            }
            for(i=0;i<matrix.size();i++){
                matrix[i][pair.second] = 0;
            }
        }
    }
};