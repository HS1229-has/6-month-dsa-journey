// class Solution {
// public:
//     vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
//         int n= nums.size();
//         int m= queries.size();
//         vector<int>anss;
//         for(int i=0;i<m;i++){
//             int index=queries[i];
//             int target=nums[index];
//             int ans= INT_MAX;
//             for(int j=0;j<n;j++){
//                 if(j==index) continue;
//                 if(nums[j]==target){
//                     int d= abs(j-index);
//                 ans=min(ans,min(d,n-d));
//                 }
//             }
//             if(ans==INT_MAX) anss.push_back(-1);
//             else anss.push_back(ans);

//         }
//         return anss;
//     }
// };

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> result;

        for (int i = 0; i < queries.size(); i++) {
            int idx = queries[i];
            int val = nums[idx];
            vector<int>& v = mp[val];

            if (v.size() == 1) {
                result.push_back(-1);
                continue;
            }

            // binary search
            int pos = lower_bound(v.begin(), v.end(), idx) - v.begin();

            int ans = INT_MAX;

            // next
            int next = v[(pos + 1) % v.size()];
            int d1 = abs(next - idx);
            ans = min(ans, min(d1, n - d1));

            // prev
            int prev = v[(pos - 1 + v.size()) % v.size()];
            int d2 = abs(prev - idx);
            ans = min(ans, min(d2, n - d2));

            result.push_back(ans);
        }

        return result;
    }
};