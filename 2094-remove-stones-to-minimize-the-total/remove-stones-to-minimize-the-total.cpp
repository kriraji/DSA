class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       for(int num:piles)
        pq.push(num);
        for(int i=1;i<=k;i++){
            int temp=pq.top();
            pq.pop();
            if(temp%2!=0)
            pq.push(temp/2 +1);
            else
            pq.push(temp/2);
        } 
        int minstone=0;
        while(!pq.empty()){
            int st=pq.top();
            pq.pop();
            minstone+=st;
        }
        return minstone;
    }
};