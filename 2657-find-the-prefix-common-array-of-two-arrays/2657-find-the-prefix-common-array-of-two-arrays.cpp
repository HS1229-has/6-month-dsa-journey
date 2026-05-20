class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n= A.size();
        int count=0;
        vector<int>f(n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            f[A[i]]++;
            if(f[A[i]]==2){
                count++;
            }
            f[B[i]]++;
            if(f[B[i]]==2){
                count++;
            }
            ans.push_back(count);
        }
return ans;
    }
};