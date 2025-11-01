class Solution {
public:
    string frequencySort(string s) {
        priority_queue<int>pq;
        map<char,int>mpp;
        for(char ch:s)
         mpp[ch]++;
      for(const auto &it:mpp)
       pq.push(it.second);
       string ans="";
       while(!pq.empty()){
        int x=pq.top();
        pq.pop();
        for(const auto &it:mpp){
            if(it.second==x){
                ans.append(x,it.first);
                mpp.erase(it.first);
            }
        }
       }
       return ans;
    }
};