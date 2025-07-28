class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> dummy=words;
        string ans="";
        for(int i=0;i<dummy.size();i++)
          reverse(begin(dummy[i]),end(dummy[i]));
          for(int i=0;i<words.size();i++){
            if(dummy[i]==words[i]){
             ans=words[i];
             break;
            }
          }
          return ans;
    }
};