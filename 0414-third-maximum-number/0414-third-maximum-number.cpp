class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
         s.insert(nums[i]);
        }
vector<int>v(s.begin(),s.end());
sort(v.begin(),v.end());
int ans;
if(v.size()==2){
    ans =v[1];
}else if(v.size()==1){
    ans=v[0];
}else{
 ans= v[v.size()-3];
}
return ans;
    }
};