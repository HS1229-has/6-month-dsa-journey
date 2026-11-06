class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n= nums.size();
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             if(i!=j){

                    
        //             v.push_back(i);
        //             v.push_back(j);
        //             }
        //         }
        //     }
        // }
        // return v
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return{};
        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int c= target-nums[i];
            if(mp.find(c)!=mp.end()){
                return{i,mp[c]};
            }else{
                mp[nums[i]]=i;
            }
        }
        return{};
    }
};