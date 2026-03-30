// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int t=0;
//         for(int x:nums){
//             t+=x;
//         }
//         int l=0;
//         for(int i=0;i<nums.size()-1;i++){
//             int r= t-l-nums[i];
//             if(l==r){
//                 return i;
//             }
//             l=l+nums[i];
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        
        for(int x : nums){
            total += x;
        }
        
        int left = 0;
        
        for(int i = 0; i < nums.size(); i++){
            int right = total - left - nums[i];
            
            if(left == right){
                return i;
            }
            
            left += nums[i];
        }
        
        return -1;
    }
};