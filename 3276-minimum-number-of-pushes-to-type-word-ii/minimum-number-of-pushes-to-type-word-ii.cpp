class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int> vec(26,0);
        for(char &ch:word)
         vec[ch-'a']++;
         sort(begin(vec),end(vec),greater<int>());
         for(int i=0;i<vec.size();i++){
            int freq=vec[i];
            int press=i/8 +1;
            ans+=freq*press;
         }
         return ans;
    }
};