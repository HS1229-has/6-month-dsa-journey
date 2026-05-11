class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>1){
                ans.push_back(nums[i]);
            }
        }
        set<int>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
       vector<int>v(s.begin(),s.end());
       return v;
    }
};