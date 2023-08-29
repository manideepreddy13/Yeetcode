class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp,i,j,k;

        for(i=0;i<matrix.size();i++){
            for(j=i;j<matrix.size();j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for(i=0;i<matrix.size();i++){
            j = 0;
            k = matrix.size()-1;
            while(j<k){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                j++;
                k--;
            }
        }
    }
};