class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
     vector<array<int,3>>vec;
     for(int i=0;i<n;i++){
        int enque_time=tasks[i][0];
        int process_time=tasks[i][1];
        vec.push_back({enque_time,process_time,i});
     }
     sort(vec.begin(),vec.end());
     vector<int> ans;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
     long long time=0;
     int ind=0;
     while(ind<n || !pq.empty()){
        if(pq.empty()&& time<vec[ind][0]){
            time=vec[ind][0];
        }
        while(ind<n && vec[ind][0]<=time){
            pq.push({vec[ind][1],vec[ind][2]});
            ind++;
        }
        auto p=pq.top();
        pq.pop();
        time+=p.first;
        ans.push_back(p.second);
     }
  return ans;
    }
};