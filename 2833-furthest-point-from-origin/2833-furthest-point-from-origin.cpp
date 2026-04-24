class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n= moves.size();int count=0; int ex=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L') count--;
          if(moves[i]=='R') count++;
            if(moves[i]=='_') ex++;
        }
        int ans= max(abs(count+ex),abs(count-ex));
        return ans;
    }
};