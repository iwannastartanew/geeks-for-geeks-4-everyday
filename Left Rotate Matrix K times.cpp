class Solution {
public:
    std::vector<std::vector<int>> rotateMatrix(int k, std::vector<std::vector<int>>& mat) {
        int rows = mat.size();
        if (rows == 0) return mat;
        int cols = mat[0].size();
        if (cols == 0) return mat;

        k = k % cols;
        
        for (int i = 0; i < rows; ++i) {
            std::rotate(mat[i].begin(), mat[i].begin() + k, mat[i].end());
        }
        
        return mat;
    }
};
/* PROBLEM STATEMENT:
You are given an integer k and matrix mat. Rotate the elements of the given matrix to the left k times and return the resulting matrix.

Examples:
Input: k=1, mat=[[1,2,3],[4,5,6],[7,8,9]]
Output:
2 3 1
5 6 4
8 9 7
Explanation: Rotate the matrix by one
1 2 3       2 3 1
4 5 6  =>   5 6 4
7 8 9       8 9 7
*/
