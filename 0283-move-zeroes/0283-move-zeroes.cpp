class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<n){
            if(nums[j]!=0 && nums[i]==0 ){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }else{
                j++;
                
            }
            if(nums[i]!=0){
                i++;
            }
            
        }
    }
};