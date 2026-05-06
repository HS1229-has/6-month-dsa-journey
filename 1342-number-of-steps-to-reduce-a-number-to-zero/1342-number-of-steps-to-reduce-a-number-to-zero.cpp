class Solution {
public:
    int count=0;
    int numberOfSteps(int num) {
        if(num==0)return 0;
        else if(num%2==0){
            num=num/2;
            count++;
            numberOfSteps(num);
        }
        else if(num%2!=0){
            num=num-1;
            count++;
            numberOfSteps(num);
        }
        
        return count;
    }
    
};