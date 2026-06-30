class Solution {
public:
    int numberOfSpecialChars(string word) {

        // unordered_map<char,int> mp;

        // for(char ch : word){
        //     mp[ch]++;
        // }

        // int count = 0;

        // for(char ch='a'; ch<='z'; ch++){

        //     if(mp[ch] && mp[toupper(ch)]){
        //         count++;
        //     }
        // }

        // return count;
         unordered_set<char> lower;
        unordered_set<char> upper;

        for(char ch : word){
            if(ch >= 'a' && ch <= 'z'){
                lower.insert(ch);
            }
            else{
                upper.insert(ch);
            }
        }

        int count = 0;

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(lower.count(ch) && upper.count(toupper(ch))){
                count++;
            }
        }

        return count;
    }
};