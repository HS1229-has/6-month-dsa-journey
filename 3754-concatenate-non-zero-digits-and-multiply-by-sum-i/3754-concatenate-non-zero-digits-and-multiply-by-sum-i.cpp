class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>v;
        while(n!=0){
            int a= n%10;
            if(a!=0){
                v.push_back(a);
            }
            n=n/10;
        }
        reverse(v.begin(),v.end());
        long long sum=0;
        for(int i=0;i<v.size();i++){
            sum= sum+v[i];
        }
        long long num=0;
        for(int x:v){
            num=num* 10 +x;
        }
          long long ans = num*sum;
          return ans;
    }
};