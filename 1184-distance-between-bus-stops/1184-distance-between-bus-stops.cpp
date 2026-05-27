class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int s, int d) {
        int n= distance.size();
            
        if(s>d)
            swap(s,d);
            
int total=0;
            int c=0;
            for(int i=0;i<n;i++){
total=total+distance[i];
if(i>=s && i<d){
    c+=distance[i];
}
            }
        
        return min(c,total-c);
    }
};