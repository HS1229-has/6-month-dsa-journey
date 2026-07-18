class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n= *max_element(nums.begin(),nums.end());
        int m= *min_element(nums.begin(),nums.end());
        int p =m*n;
        int maxx=INT_MIN;
        if(p==1) return 1;
        for(int i=1;i<p;i++){
if(m%i==0 && n%i==0){
    maxx=max(maxx,i);
}
        }
        return maxx;
    }
};