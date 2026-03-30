class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            int l=0;
            for(int j=0;j<i;j++){
                l=l+nums[j];
            }
            int r=0;
            for(int j=i+1;j<n;j++){
                r=r+nums[j];
            }
            if(l==r){
                return i;
            }
        }
        return -1;
    }
};