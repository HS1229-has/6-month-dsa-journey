class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int csum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            csum=csum+nums[i];
            maxsum= max(csum , maxsum);
            if(csum<0){
                csum=0;
            }
        }
        return maxsum;
    }
};