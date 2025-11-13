class Solution {
public:
    bool checkValidString(string s) {
       int openleftcnt=0;
       int closerightcnt=0;
       for(char &ch:s){
        if(ch=='(' || ch=='*')
         openleftcnt++;
         else
          openleftcnt--;
          if(openleftcnt<0)
           return false;
       } 
       for(int i=s.length()-1;i>=0;i--){
        if(s[i]==')' || s[i]=='*')
          closerightcnt++;
          else 
           closerightcnt--;
           if(closerightcnt<0)
            return false;
       }
       return true;
    }
};