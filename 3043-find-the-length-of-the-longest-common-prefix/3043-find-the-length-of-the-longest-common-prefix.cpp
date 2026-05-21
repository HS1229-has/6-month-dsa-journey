class Solution {
public:
    
    int digits(int num) {
        int cnt = 0;
        
        while(num > 0) {
            cnt++;
            num /= 10;
        }
        
        return cnt;
    }
    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_set<int> prefixes;
        
        // Store all prefixes from arr1
        for(int num : arr1) {
            
            while(num > 0) {
                prefixes.insert(num);;
                num /= 10;
            }
        }
        
        int ans = 0;
        
        // Check prefixes from arr2
        for(int num : arr2) {
            
            while(num > 0) {
                
                if(prefixes.count(num)) {
                    ans = max(ans, digits(num));
                    break;
                }
                
                num /= 10;
            }
        }
        
        return ans;
    }
};