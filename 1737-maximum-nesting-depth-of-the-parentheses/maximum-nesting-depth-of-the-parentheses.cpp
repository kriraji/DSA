class Solution {
public:
    int maxDepth(string s) {
      int cnt=0;
      int maxi=INT_MIN;
      int i=0;
      while(s[i]!='\0'){
        if(s[i]=='('){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else if(s[i]==')')
         cnt--;
         i++;
      }
      if(maxi!=INT_MIN)
      return maxi;
      else
      return 0;
    }
};