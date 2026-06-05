class Solution {
    using ll = long long;

    struct Node {
        long long cnt;
        long long sum;
    };

    string s;
    Node dp[20][11][11][2][2];
    bool vis[20][11][11][2][2];

    Node dfs(int pos, int p2, int p1,
             bool started, bool tight) {

        if (pos == s.size())
            return {1, 0};

        if (!tight && vis[pos][p2][p1][started][0])
            return dp[pos][p2][p1][started][0];

        int lim = tight ? s[pos] - '0' : 9;
        Node ans{0, 0};

        for (int d = 0; d <= lim; d++) {
            bool ntight = tight && (d == lim);

            if (!started && d == 0) {
                Node nxt = dfs(pos + 1, 10, 10, false, ntight);
                ans.cnt += nxt.cnt;
                ans.sum += nxt.sum;
                continue;
            }

            if (!started) {
                Node nxt = dfs(pos + 1, 10, d, true, ntight);
                ans.cnt += nxt.cnt;
                ans.sum += nxt.sum;
            } else {
                int add = 0;

                if (p2 != 10) {
                    if ((p1 > p2 && p1 > d) ||
                        (p1 < p2 && p1 < d))
                        add = 1;
                }

                Node nxt = dfs(pos + 1, p1, d, true, ntight);

                ans.cnt += nxt.cnt;
                ans.sum += nxt.sum + add * nxt.cnt;
            }
        }

        if (!tight) {
            vis[pos][p2][p1][started][0] = true;
            dp[pos][p2][p1][started][0] = ans;
        }

        return ans;
    }

    long long solve(long long x) {
        if (x <= 0) return 0;
        s = to_string(x);
        memset(vis, 0, sizeof(vis));
        return dfs(0, 10, 10, false, true).sum;
    }

public:
    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};