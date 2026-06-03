class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld,
                           vector<int>& ws, vector<int>& wd) {

        int minLend = INT_MAX;
        for (int i = 0; i < ls.size(); i++) {
            minLend = min(minLend, ls[i] + ld[i]);
        }

        int minWend = INT_MAX;
        for (int j = 0; j < ws.size(); j++) {
            minWend = min(minWend, ws[j] + wd[j]);
        }

        int ans = INT_MAX;
        for (int j = 0; j < ws.size(); j++) {
            ans = min(ans, max(ws[j], minLend) + wd[j]);
        }
        for (int i = 0; i < ls.size(); i++) {
            ans = min(ans, max(ls[i], minWend) + ld[i]);
        }

        return ans;
    }
};