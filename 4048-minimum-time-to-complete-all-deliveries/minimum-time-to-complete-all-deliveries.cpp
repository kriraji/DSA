class Solution {
public:
 long long findgcd(long a, long b){
  while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
 }
 long long findlcm(long a,long b){
    if(a==0 || b==0)
     return 0;
     return (a*b)/findgcd(a,b);
 }
  long long findtime(long long T,int d1,int d2, int r1, int r2){
    long long t1= T-(T/r1);
    long long t2=T-(T/r2);
    long t3=T-(T/(findlcm(r1,r2)));
    return(d1<=t1 && d2<=t2 && d1+d2 <=t3);
  }
    long long minimumTime(vector<int>& d, vector<int>& r) {
        int d1=d[0],d2=d[1],r1=r[0],r2=r[1];
        long long low=0,high=2e18;
        long long ans=-1;
        while(low<=high){
       long long mid=low+(high-low)/2;
         if(findtime(mid,d1,d2,r1,r2)){
            ans=mid;
            high=mid-1;
         }
         else
         low=mid+1;

        }
        return ans;
    }
};