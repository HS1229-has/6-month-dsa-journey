class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int ans =0;
        int i=0; int j=n-1;
        while(i<j){
ans =max(nums[i]+nums[j],ans );
i++; j--;
        }
        return ans ;
    }
};