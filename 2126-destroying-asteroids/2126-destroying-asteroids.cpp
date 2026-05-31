class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
    //     sort(asteroids.begin(),asteroids.end());
    //     int n= asteroids.size();
    //     bool flag=true;
    //     if(asteroids[0]>mass){
    //         return false;
    //     }
    //     for(int i=0;i<n;i++){
    //         if(asteroids[i]>mass){
    //             flag=false;
    //         }else{
    //             mass+=asteroids[i];
    //         }
        
    //     }
    //  if(flag==true) return true;
    //  else return false;

 
        sort(asteroids.begin(), asteroids.end());

        for (int asteroid : asteroids) {
            if (mass < asteroid)
                return false;
else
            mass += asteroid;
        }

        return true;
    }
};
