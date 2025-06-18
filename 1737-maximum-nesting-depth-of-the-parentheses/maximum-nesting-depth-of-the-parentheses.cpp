class Solution {
public:
    int maxDepth(string s) {
      int cnt=0;
      int maxi=0;
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
      return maxi;
    }
};