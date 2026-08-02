class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--){
            if(mp[arr[i]]==arr[i]) return arr[i];

        }
        return -1;
    }
};