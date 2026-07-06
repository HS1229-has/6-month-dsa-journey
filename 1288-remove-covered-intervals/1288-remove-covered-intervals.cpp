class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();
         int a=0;
        for(int i=0;i<n;i++){
             bool c= false;
            for(int j=0;j<n;j++){
                if(i==j) continue;

                if(intervals[j][0]<=intervals[i][0]&&intervals[j][1]>=intervals[i][1]){
                    c= true ;
                    break;
                }
            }
if(!c) a++;
        }
        
        return a;
    }
};