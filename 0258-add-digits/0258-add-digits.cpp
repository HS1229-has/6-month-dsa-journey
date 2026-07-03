class Solution {
public:

int summ(int num){
    int sum =0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
    int addDigits(int num) {
        summ(num);
        while(num>=10){
            num=summ(num);
        }
        return num;
    }
};