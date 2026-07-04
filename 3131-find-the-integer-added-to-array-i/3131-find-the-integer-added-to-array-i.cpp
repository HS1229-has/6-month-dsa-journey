class Solution {
public:
    int addedInteger(vector<int>& num1, vector<int>& num2) {
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int ans=(num2[0]-num1[0]);
        return ans;
    }
};