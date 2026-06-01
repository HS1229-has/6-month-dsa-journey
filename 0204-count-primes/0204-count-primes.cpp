class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n,true);
        if(n<=2) return 0;
        v[0]=v[1]=false;

        for(int i=2;i*i<n;i++){
            if(v[i]){
                for(int j=i*i;j<n;j=j+i){
                    v[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(v[i]) count++;
        }
        return count;
    }
};