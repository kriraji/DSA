class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        if(n==1 && s[0]!=' ')
         return 1;
        int i=n-1;
        int len=0;
        while(i>=0&&s[i]==' '){
            i--;
        }
        while(i>=0 &&s[i]!=' '){
            len++;
            i--;
        }
        return len;
    }

};