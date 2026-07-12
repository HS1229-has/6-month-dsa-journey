class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n= nums.size();

//         vector<int>v;
//        unordered_set<int>s;
//         for(int x:nums){
//             s.insert(x);
//         }
//         for(int i=1;i<=n;i++){
// if(s.find(i)==s.end()){
//     v.push_back(i);
// }
//         }
//         return v;
int n = nums.size();

set<int> s(nums.begin(), nums.end());
vector<int> v(s.begin(), s.end());

vector<int> result;

int i = 0;
int j = 1;

while (i < v.size()) {
    if (v[i] == j) {
        i++;
        j++;
    } else {
        result.push_back(j);
        j++;
    }
}

while (j <= n) {
    result.push_back(j);
    j++;
}

return result;
    }
};