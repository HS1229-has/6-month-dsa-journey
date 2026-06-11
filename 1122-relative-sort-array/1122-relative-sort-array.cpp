class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<arr2.size();i++){
            int x= arr2[i];
            while(mp[arr2[i]]>0){
                v.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        vector<int>r;
        for(auto i=0;i<arr1.size();i++){
            if(mp[arr1[i]]>0){
                while(mp[arr1[i]]>0){
                    r.push_back(arr1[i]);
                    mp[arr1[i]]--;
                }
            }
        }
        sort(r.begin(),r.end());
        for(int i=0;i<r.size();i++){
            v.push_back(r[i]);
        }
        
        
        return v;
    }
};