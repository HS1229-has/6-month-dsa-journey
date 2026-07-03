class Solution {
public:
    int longestPalindrome(string s) {
      int count=0;
      int n= s.length();
    bool odd=0;

        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a') {
                lower[s[i] - 'a']++;
            } else {
                upper[s[i] - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0) {
                count = count + lower[i];
            } else {
                count +=  lower[i] - 1;
                odd = 1;
            }
            if (upper[i] % 2 == 0) {
                count += upper[i];
            } else {
                count += upper[i] - 1;
                odd = 1;
            }
        }
        if (odd == 1) {
            return count + odd;
        } else {
            return count;
        }
    }
};