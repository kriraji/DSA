class Solution {
public:
    bool wordPattern(string pattern, string s) {
     vector<string> words;
     stringstream ss(s);
     string token;
     int cntword=0;
     while(getline(ss,token,' ')){
        words.push_back(token);
        cntword++;
     }
   int n=pattern.length();
   if(n!=cntword)
    return false;
    unordered_map<string,char> mpp;
    unordered_set<char> st;
    for(int i=0;i<n;i++){
        char ch=pattern[i];
        string str=words[i];
    if(mpp.find(str)==mpp.end() && st.find(ch)==st.end()){
        mpp[str]=ch;
        st.insert(ch);
    }
    else if(mpp[str]!=ch)
    return false;
    }       
    return true;
    }
};