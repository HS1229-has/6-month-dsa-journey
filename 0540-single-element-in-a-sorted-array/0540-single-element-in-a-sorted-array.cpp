class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     if(mp[nums[i]]==1){
        //        ans=  nums[i];
        //     }
        // }
        // return ans;

       
        int low = 0, high = nums.size() - 2;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == nums[mid ^ 1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return nums[low];
    }
};
