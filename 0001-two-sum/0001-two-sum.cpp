class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]+nums[j]==target){
                    if(i!=j){

                    
                    v.push_back(i);
                    v.push_back(j);
                    }
                }
            }
        }
        return v;
    }
};