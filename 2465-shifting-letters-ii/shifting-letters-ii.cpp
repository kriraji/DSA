class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       int n=s.length();
       vector<int> vec(n,0);
       for(auto &q:shifts){
        int li=q[0];
        int ri=q[1];
        int query=q[2];
        if(query==0){
        vec[li]+=-1;
        if(ri+1<n)
        vec[ri+1]-=-1;
       } 
       else{
        vec[li]+=1;
        if(ri+1<n)
         vec[ri+1]-=1;
       }
    }
    for(int i=1;i<n;i++)
     vec[i]=vec[i]+vec[i-1];
      for (int i = 0; i < n; i++) {
            int shift = ((vec[i] % 26) + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }
        return s;
    }
};