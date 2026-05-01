class Solution {
public:
// int ans=0;
// int maxx=INT_MIN;

// void calculate(vector<int>& nums){
//     int n= nums.size();
//     for(int i=0;i<n;i++){
//         ans+=nums[i]*i;
//         maxx=max(maxx,ans);
//     }
// }
//     int maxRotateFunction(vector<int>& nums) {
//         int n= nums.size();
//        while(n>0){
//         calculate(nums);
//         int a= nums.back();
//         nums.pop_back();
//         nums.insert(nums.begin(),a);

//         ans=0;

//         n--;
//        }
//        return maxx;
//     }

  int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long sum = 0, F = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            F += i * nums[i];
        }

        long maxi = F;

        for(int k = 1; k < n; k++) {
            F = F + sum - n * nums[n - k];
            maxi = max(maxi, F);
        }

        return maxi;
    }
};