class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rev=0;
        while(x>0){
            int d= x%10;
                 if(rev > INT_MAX/10) return false;
            rev= rev*10+d;
            x=x/10;
        }
        if(temp==rev){
            return true ;
        }else return false;
    }
};