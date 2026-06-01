class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0;
        int n= cost.size();
        int count=0;
      for(int i=n-1;i>=0;i-- ){
ans=ans+cost[i];
count++;
if(count==2){
    i--;
    count=0;
}
        }
      
      return ans;
//   sort(cost.rbegin(), cost.rend());

//         int ans = 0;
//         for (int i = 0; i < cost.size(); i++) {
//             if (i % 3 != 2) {
//                 ans += cost[i];
//             }
//         }

//         return ans;
    }
};