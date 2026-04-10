class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n= nums.size();
        if(n<3){
            return -1;
        }
        int flag= true;
        int maxi=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j]&& nums[j]==nums[k]){
                      int  maxx=abs(i-j)+abs(j-k)+abs(k-i);
                        maxi=min(maxi,maxx);
                        flag=false;
                    }
            }
        }}
        if(flag==false){
        return maxi;
        }else return -1;
    }
};