class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
      int maxi=*max_element(nums.begin(),nums.end());
      int mini=*min_element(nums.begin(),nums.end());
      int maxdiff=maxi-mini;
      return (long long)maxdiff*k;  
    }
};