class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++){
            int m=i;
            int sum=0;
            while(m!=0){
                sum+=m%10;
                m=m/10;
            }
            mp[sum]++;
        }
        int maxx=0;
        for(auto &p:mp){
            maxx=max(maxx,p.second);
        }
        int count=0;
        for(auto &p :mp){
if(p.second==maxx){
    count++;
}
        }
        return count;
    }
};