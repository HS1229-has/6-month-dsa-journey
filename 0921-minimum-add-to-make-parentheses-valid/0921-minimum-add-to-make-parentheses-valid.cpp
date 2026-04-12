class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0; int n= s.size(); int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }else if(count==0 && s[i]!='('){
                x++;
            }else{
                count--;
            }
        }
        int c=count+x;
        return c;
    }
};