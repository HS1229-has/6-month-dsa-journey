class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int profit=0;
        int minn= INT_MAX;
        for(int i=0;i<n;i++){
            minn= min(minn, prices[i]);
            profit=max(profit,prices[i]-minn);
        }
        return profit;
    }
};