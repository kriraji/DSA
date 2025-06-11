class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isAlphanum(s[i])){
                i++;
                continue;
            }
             if(!isAlphanum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
             return false;
             i++;
             j--;
        }
        return true;
    }
    bool isAlphanum(char ch){
        if((ch>='0'&& ch<='9') ||(tolower(ch)>='a'&& tolower(ch)<='z'))
         return true;
        return false;
    }
};