class Solution {
public:
    long long countDistinct(long long n) {
       string s=to_string(n);
       long long size=s.length();
       long long ans=0;
       long long power=9;
       for(int i=1;i<size;i++){
       ans+=power;
       power*=9;
       } 
       for(int i=0;i<size;i++){
        int digit=s[i]-'0';
        for(int d=1;d<digit;d++){
           int rem=size-i-1;
            ans+=(long long)pow(9,rem);
        }
        if(digit==0)
         break;
         if(i==size-1)
          ans+=1;
       }
       return ans;
    }
};