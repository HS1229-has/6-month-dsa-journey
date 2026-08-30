class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int i = min_element(nums.begin(), nums.end()) - nums.begin();
        int j = max_element(nums.begin(), nums.end()) - nums.begin();

        int left  = min(i, j);
        int right = max(i, j);

        return min({right + 1, n - left, left + 1 + n - right});
    }
};   