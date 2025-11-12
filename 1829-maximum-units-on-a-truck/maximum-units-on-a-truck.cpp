class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int capacity) {
        sort(boxTypes.begin(), boxTypes.end(),
         [](const vector<int>& a,
            const vector<int>& b) {
             return a[1] > b[1];
         });
        int maxcap=0;
      for(auto &p:boxTypes){
        int boxes=p[0];
        int unitperbox=p[1];
           if(capacity==0)
            break;
            else if(capacity>=boxes){
            maxcap+=(boxes*unitperbox);
             capacity-=boxes; 
            }
            else{
            maxcap+=(capacity*unitperbox);
            capacity=0;
            }
             
   }
  return maxcap;
    }
};