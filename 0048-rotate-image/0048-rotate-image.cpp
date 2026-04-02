class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int rows=matrix.size();
       int col=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=i+1;j<col;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<rows;i++){
            int s=0;int e=col-1;
            while(s<=e){
                swap(matrix[i][s],matrix[i][e]);
                s++; e--;
            }
        }
        return ;
    }
};