class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();

       set<int>s;
        for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            if(nums2[i]==nums1[j]){
               
                    s.insert(nums1[j]);
                }
                  
            }
         }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};