class Solution {
public:
 bool isbalance(int num){
  vector<int> vec(10,0);
  string s=to_string(num);
  for(char ch:s){
  vec[ch-'0']++;
  if(ch=='0')
   return false;
  }
  for(int i=1;i<=9;i++){
    if(vec[i]>0 && vec[i]!=i)
     return false;
  }
  return true;
 }
    int nextBeautifulNumber(int n) {
       int maxval=1224444;
       for(int i=n+1;i<=maxval;i++){
        if(isbalance(i))
           return i;
       } 
       return -1;
    }
};