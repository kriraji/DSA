class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int> mpp;
       priority_queue<pair<int,char>> pq;
       string ans="";
       for(auto ch: s){
        mpp[ch]++;
       } 
       for(auto it:mpp){
        pq.push({it.second,it.first});
       }
       while(!pq.empty()){
        auto temp=pq.top();
        int freq=temp.first;
        char ch=temp.second;
        ans+=string(freq,ch);
        pq.pop();
       }
       return ans;

    }
};