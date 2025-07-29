class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
      int firstP=lower_bound(begin(nums),end(nums),1)-begin(nums);
      int firstZero=lower_bound(begin(nums),end(nums),0)-begin(nums);
      return max(n-firstP,firstZero);  
    }
};