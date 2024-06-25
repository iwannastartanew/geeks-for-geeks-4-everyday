class Solution {
public:
    //func
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
        //taking modulo of k with m to handle cases where k exceeds m
        k %= m;
        //transpose the matrix
        vector<vector<int>> transposed(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                transposed[j][i] = mat[i][j];
            }
        }
        //reverse each column for the specified number of rows
        for (int col = 0; col < m; col++) {
            vector<int> temp(n);
            for (int row = 0; row < n; row++) {
                temp[(row + k) % n] = transposed[col][row];
            }
            for (int row = 0; row < n; row++) {
                transposed[col][row] = temp[row];
            }
        }
        //to transpose back to the original row-column layout
        vector<vector<int>> result(n, vector<int>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = transposed[i][j];
            }
        }

        return result;
    }
};
