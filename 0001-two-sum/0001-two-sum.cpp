class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n= nums.size();
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     int c= target-nums[i];
        //     if(mp.find(c)!=mp.end()){
        //         return {i , mp[c]};
        //     }else{
        //         mp[nums[i]]=i;
        //     }
        // }
        // return{};

int n= nums.size();
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            return {i,j};
        }
    }
}
return {};
    }
};