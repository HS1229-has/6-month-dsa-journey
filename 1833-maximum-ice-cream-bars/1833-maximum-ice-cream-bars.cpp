class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum =0;
        int count=0;
       int i=0;
       while(i<costs.size()){
        sum = sum+costs[i];
        if(sum>coins){
            return i;
        }
        i++;
       }
       return i;
    }
};