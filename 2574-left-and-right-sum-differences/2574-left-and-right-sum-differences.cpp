class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
       vector<int>left(n,0);
       vector<int>right(n,0);
       for(int i=0;i<n-1;i++){
        left[i+1]=nums[i]+left[i];
       }
       for(int i=n-1;i>0;i--){
        right[i-1]=right[i]+nums[i];
       }
       vector<int>ans(n);
       for(int i=0;i<n;i++){
        ans[i]=abs(left[i]-right[i]);
       }
return ans;
    }
};