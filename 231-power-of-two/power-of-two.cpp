class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        return true;
       for(int i=1;i<31;i++){
        if(n==pow(2,i))
         return true;
       }
       return false;
    }
};