class Solution {
public:
string root(string &word,unordered_set<string>&st){
    for(int i=1;i<word.length();i++){
        string ans=word.substr(0,i);
        if(st.count(ans))
          return ans;
    }
    return word;
}
    string replaceWords(vector<string>& dictionary, string sentence) {
       unordered_set<string> st(begin(dictionary),end(dictionary));
       stringstream ss(sentence);
       string word;
       string res;
       while(getline(ss,word,' ')){
        res+=root(word,st)+" ";
       }
       res.pop_back();
       return res;
    }
};