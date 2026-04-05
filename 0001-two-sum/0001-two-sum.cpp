class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int s=target-nums[i];
            if(mp.find(s)!=mp.end()){
                return {i,mp[s]};
            }else{
                mp[nums[i]]=i;
            }
        }
        return{};
    }
};