class Solution {
public:
int summ (int num){
    int digit;
    
int sum=0;
    while(num!=0){
        digit=num%10;
        sum = sum+digit;
        num=num/10;
    }
    return sum;
}
    int addDigits(int num) {
       while(num>=10){
     num=summ(num);
   
    }
      return num;
    }
};