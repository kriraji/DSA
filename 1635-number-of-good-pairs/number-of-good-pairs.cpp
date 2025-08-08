class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int n=nums.size();
      int cnt=0;
      unordered_map<int,int> mpp;
      for(int i=0;i<n;i++)
      mpp[nums[i]]++;
      for(auto &p:mpp){
        cnt+=p.second*(p.second-1)/2;
      }
      return cnt;
    }
};