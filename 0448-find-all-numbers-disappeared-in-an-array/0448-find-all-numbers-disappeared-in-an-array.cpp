class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int>temp;
//         unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         for(int i=1;i<=nums.size();i++){
// if(mp[i]==0){
//     temp.push_back(i);
// }
//         }
//         return temp;

unordered_set<int>s;
for(int i=0;i<nums.size();i++){
    s.insert(nums[i]);
}
vector<int>v;
for(int i=1;i<=nums.size();i++){
    if(s.find(i)==s.end()){
        v.push_back(i);
    }
}
return v;
    }
};