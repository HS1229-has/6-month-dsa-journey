class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int x= n/2;
        return nums[x];
    }
};