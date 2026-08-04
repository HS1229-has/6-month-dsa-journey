class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int n= *min_element(nums.begin(),nums.end());
        int m= *max_element(nums.begin(),nums.end());
        vector<int>v;
        for(int i=n;i<m;i++){
if(s.find(i)==s.end()){
    v.push_back(i);
}
        }
return v;
    }
};