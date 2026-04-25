class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r= matrix.size();
        int c= matrix[0].size();
        for(int i=0;i<r;i++){
            if(matrix[i][0]<=target && target<=matrix[i][c-1]){
                int s=0; int e=c-1;
                while(s<=e){
                    int mid=(s+e)/2;
                    if(matrix[i][mid]==target){
                        return 1;
                    }else if(matrix[i][mid]<target){
                        s=mid+1;
                    }else{
                        e=mid-1;
                    }
                }
            }
        }
        return 0;
    }
};