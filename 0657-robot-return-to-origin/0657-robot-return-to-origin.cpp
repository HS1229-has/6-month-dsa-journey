class Solution {
public:
    bool judgeCircle(string moves) {
        int n= moves.length();
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                count1++;
            }else if(moves[i]=='D'){
                count2++;
            }else if(moves[i]=='L'){
                count3++;
            }else{
                count4++;
            }
        }
        if(count1==count2 && count3==count4){
            return true;
        }else return false;

    }
};