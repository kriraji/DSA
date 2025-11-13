class Solution {
public:
    bool checkValidString(string s) {
       stack<int> openst;
       stack<int> aesst;
       for(int i=0;i<s.length();i++){
        if(s[i]=='(')
         openst.push(i);
         else if (s[i]==')'){
         if(!openst.empty())
           openst.pop();
           else if(!aesst.empty())
             aesst.pop();
             else
             return false;
         }
          
          else
          aesst.push(i);
       } 
        while(!openst.empty()&& !aesst.empty()){
            if(openst.top()>aesst.top())
             return false;
             else{
                openst.pop();
                aesst.pop();
             }
        }
     return openst.empty();
    }
};