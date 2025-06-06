class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
         return false;
        long int n=x;
       long int rev=0;
        while(n>=10){
            rev=rev*10+n%10;
            n=n/10;
        }
    rev=rev*10+n;
    if(rev==x)
     return true;
return false;     
    }
};