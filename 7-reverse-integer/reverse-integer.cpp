class Solution {
public:
    int reverse(int x) {
        if(x> INT_MAX || x< INT_MIN)
          return 0;
        long int n=x;
        long int rev=0;
        if(n<0){
            if(-n > INT_MAX)
             return 0;
            else
             n=-n;
        }
       while(n>=10){
         rev=rev*10+n%10;
         n=n/10;
         if(rev >INT_MAX || rev< INT_MIN ){
            return 0;
            break;
         }
       }
     if(rev*10 > INT_MAX || rev*10<INT_MIN)
       return 0;
   rev=rev*10+n;
    if(x<0)
    rev= -rev;
    if(rev >INT_MAX || rev< INT_MIN)
      return 0;
  return rev;
    }
};