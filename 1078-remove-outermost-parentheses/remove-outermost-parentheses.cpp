class Solution {
public:
    string removeOuterParentheses(string s) {
       stack <char> st;
       string res;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
          if(!st.empty())
           res+=s[i];
           st.push(s[i]);
              }
        else{
           st.pop();
           if(!st.empty())
            res+=s[i];        
       }
       }
       return res;   
    }
};