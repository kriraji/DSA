class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int> mpp;
      for(auto num:nums)
       mpp[num]++;
       priority_queue<pair<int,int>>pq;
       for(auto p:mpp){
        pq.push({p.second,p.first});
       }
  vector<int>ans;
  while(k-- &&!pq.empty()){
    auto p=pq.top();
    pq.pop();
    ans.push_back(p.second);
  }
  return ans;
    }
};