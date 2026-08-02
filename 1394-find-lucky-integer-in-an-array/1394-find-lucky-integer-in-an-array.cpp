class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--){
            if(mp[arr[i]]==arr[i]){
                return arr[i];
            }
        }
        return -1;
    }
};