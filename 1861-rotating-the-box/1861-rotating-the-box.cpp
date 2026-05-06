class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i = 0; i < n; i++) {
            int prev = m - 1;
            for(int j = m - 1; j >= 0; j--) {
                if(matrix[i][j] == '*') {
                    prev = j - 1;
                } 
                else if(matrix[i][j] == '#') {
                    matrix[i][j] = '.';
                    matrix[i][prev] = '#';
                    prev--;
                }
            }
        }
        vector<vector<char>> rotatedBox(m, vector<char>(n));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                rotatedBox[j][n - i - 1] = matrix[i][j];
            }
        }

        return rotatedBox;
    }
};