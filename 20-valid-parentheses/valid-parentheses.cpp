class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
      for(char ch:s){
        if(!st.empty()){
            if((ch==')'&&st.top()=='(') || (ch=='}'&&st.top()=='{')||(ch==']'&&st.top()=='['))
        st.pop();
        else
        st.push(ch);
      }
      else
      st.push(ch);
      }
      if(!st.size())
       return true;
       return false;
    }
};    