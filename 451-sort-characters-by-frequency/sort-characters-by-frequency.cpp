class Solution {
public:
    string frequencySort(string s) {
       map<char,int>mpp;
       for(char ch:s)
        mpp[ch]++;
        priority_queue<pair<int,char>>pq;
        for(auto p:mpp)
        pq.push({p.second,p.first});
        string ans="";
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            ans.append(p.first,p.second);
        }
        return ans;
    }
};