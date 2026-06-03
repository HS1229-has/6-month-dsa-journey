class Solution {
public:
    // int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
    //      int ans = INT_MAX;

    //     for (int i = 0; i < landStartTime.size(); i++) {
    //         for (int j = 0; j < waterStartTime.size(); j++) {

    //             int landEnd = landStartTime[i] + landDuration[i];
    //             ans = min(ans,
    //                       max(landEnd, waterStartTime[j]) + waterDuration[j]);

    //             int waterEnd = waterStartTime[j] + waterDuration[j];
    //             ans = min(ans,
    //                       max(waterEnd, landStartTime[i]) + landDuration[i]);
    //         }
    //     }

    //     return ans;

    int earliestFinishTime(vector<int>& ls, vector<int>& ld,
                           vector<int>& ws, vector<int>& wd){

               int minland=INT_MAX;
               for(int i=0;i<ls.size();i++){
                minland=min(minland,ls[i]+ld[i]);
               } 
               int minwater=INT_MAX;
               for(int j=0;j<ws.size();j++){
                minwater=min(minwater,ws[j]+wd[j]);
               }   
               int ans= INT_MAX;
               for(int i=0;i<ws.size();i++){
                ans= min(ans,max(minland,ws[i])+wd[i]);
               } 
               for(int j=0;j<ls.size();j++){
                ans=min(ans,max(minwater,ls[j])+ld[j]);
               }  
               return ans;     
    }
};