class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
           unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int res=target-numbers[i];
            if(mp.find(res)!=mp.end()){
                return {mp[res]+1, i+1};
            }else{
                mp[numbers[i]]=i;
            }
        }
        return{};
    }
        // int i=0;
        // int j=n-1;
        // while(i<j){
        //     int sum = numbers[i]+numbers[j];
        //     if(sum>target){
        //         j--;
        //     }else if(sum<target){
        //         i++;
        //     }else{
        //         return {i+1,j+1};
        //     }
        // }
        // return {};

     
};