class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> diag;
        int numRows = mat.size(), numCols = mat[0].size();
        
        for (int i = 0; i < numCols; ++i) {
            diag.clear();
            
            for (int j = 0; j < numRows && i + j < numCols; ++j) {
                diag.push_back(mat[j][i+j]);
            }
            
            sort(diag.begin(), diag.end());
            
            for (int j = 0; j < numRows && i + j < numCols; ++j) {
                mat[j][i+j] = diag[j];
            }
        }
        
        for (int i = 1; i < numRows; ++i) {
            diag.clear();
            
            for (int j = 0; i + j < numRows && j < numCols; ++j) {
                diag.push_back(mat[i+j][j]);
            }
            
            sort(diag.begin(), diag.end());
            
            for (int j = 0; i + j < numRows && j < numCols; ++j) {
                mat[i+j][j] = diag[j];
            }
        }
        
        return mat;
    }
};
