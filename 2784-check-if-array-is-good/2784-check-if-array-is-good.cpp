class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        unordered_map<int,int>mp;
        int maxi =0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
             maxi = max(maxi, nums[i]);
        }
        if(maxi!=n-1){
            return false;
        }
        for(int i=1; i<maxi; i++){
            if(mp[i] != 1){
        return false;
            }
        }

        if(mp[maxi]!=2){
            return false;
        }
        
        return true;
    }
};