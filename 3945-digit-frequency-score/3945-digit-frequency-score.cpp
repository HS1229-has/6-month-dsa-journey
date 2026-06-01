class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans=0;
        do{
            ans=ans+(n%10);
            n=n/10;
        }while(n>0);
        return ans;
    }
};