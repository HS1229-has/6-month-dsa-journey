class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>temp=nums;
        sort(nums.begin(),nums.end());
        int x;
       
     if(nums[nums.size()-1]>=2*(nums[nums.size()-2])){
        x=nums[nums.size()-1];
    
        for(int i=0;i<temp.size();i++){
if(x==temp[i]){
    return i;
}
        }
     }
    return -1;
    }
};