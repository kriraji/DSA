class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int> pq;
       for(auto stone:stones)
       pq.push(stone);
       int b=0,a=0;
       while(pq.size()!=1){
         a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
         pq.push(a-b);
       } 
      int ans=pq.top();
       return ans;
    }
};