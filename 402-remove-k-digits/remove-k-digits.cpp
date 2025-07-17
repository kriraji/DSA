class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        string ans;
        int cnt=0;
        for(int i=0;i<num.size();i++){
            while(!st.empty()&& num[i]<st.top()&&cnt<k){
                st.pop();
                cnt++;
            }
            st.push(num[i]);
        }
         if(st.size()==1 && cnt==0)
         return "0";
        while(cnt<k){
            st.pop();
            cnt++;
        }
       while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }
        reverse(ans.begin(),ans.end());
        int i = 0;
    while (i < ans.length() && ans[i] == '0') {
        i++;
    }
    if (i == ans.length()) { 
        return "0";
    }
    ans.erase(0, i);
    return ans;
}
};