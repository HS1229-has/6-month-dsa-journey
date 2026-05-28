class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n= prices.size();
        sort(prices.begin(),prices.end());
        int i=0;
        while(i<n-1){
            if((prices[i]+prices[i+1])<=money){
                int sum = money-(prices[i]+prices[i+1]);
                return sum;
            }else{
                return money;
            }
        }
return {};
    }
};