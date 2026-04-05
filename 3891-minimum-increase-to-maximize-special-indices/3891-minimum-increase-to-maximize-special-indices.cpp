class Solution {
public:
    long long minIncrease(vector<int>& nums) {
        int n = nums.size();
        
        vector<long long> cost(n, 0);
        
        for (int i = 1; i < n - 1; i++) {
            int need = max(nums[i-1], nums[i+1]) + 1;
            cost[i] = max(0, need - nums[i]);
        }
        
      
        vector<pair<int, long long>> dp(n);
        
        dp[0] = {0, 0};
        
        for (int i = 1; i < n; i++) {
           
            dp[i] = dp[i-1];
            
          
            if (i > 0 && i < n-1) {
                pair<int, long long> take;
                
                if (i >= 2) take = dp[i-2];
                else take = {0, 0};
                
                take.first += 1;
                take.second += cost[i];
                
               
                if (take.first > dp[i].first ||
                   (take.first == dp[i].first && take.second < dp[i].second)) {
                    dp[i] = take;
                }
            }
        }
        
        return dp[n-1].second;
    }
};