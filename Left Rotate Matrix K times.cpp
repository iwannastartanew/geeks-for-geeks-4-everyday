class Solution {
public:
    vector<vector<int>>rotateMatrix(int k,vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        //handle case where k is larger than the width of the matrix
        k %= m;
        
        for (int i = 0; i < n; ++i) {
            //create a copy of the current row
            vector<int> originalRow = mat[i];
            
            for (int j = 0; j < m; ++j) {
                //calculate the new index for the rotated position
                int newCol = (j + k) % m;
                
                //to update the original matrix with the rotated value
                mat[i][newCol] = originalRow[j];
            }
        }
        return mat;
    }
};
